#include <bits/stdc++.h>
using namespace std;
long long inf = numeric_limits<long long>::max();

int main(){
    int N, K;
    cin >> N;
    cin >> K;
    vector<long long> h(N);
 
    for(long long i=0; i<N; i++){
        cin >> h[i];
    }

    // init dp table
    vector<long long> dp(N, inf);
    dp[0] = 0;
    
    for(long long i=1; i<N; i++){
        long long min = inf;
        for(long long j=1; j<K+1; j++){
            // 配列外参照防止
            if(i-j>=0 && i-j<N){
                // cout << i << " " << i-j << endl;
                // cout << min << endl;
                if((dp[i-j] + abs(h[i] - h[i-j])) < min){
                    min = abs(h[i] - h[i-j]) + dp[i-j];
                }
            }
        }
        dp[i] = min;
    }

    // 添字注意．
    cout << dp[N-1] << endl;

    return 0;
}