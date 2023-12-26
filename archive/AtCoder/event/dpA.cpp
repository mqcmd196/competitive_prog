#include <bits/stdc++.h>
using namespace std;
int inf = numeric_limits<int>::infinity();
 
int main(){
    int N;
    cin >> N;
    vector<int> h(N);
 
    for(int i=0; i<N; i++){
        cin >> h[i];
    }

    // init dp table
    vector<int> dp(N, inf);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i=2; i<N; i++){
        dp[i] = min(dp[i-2] + abs(h[i] - h[i-2]), dp[i-1] + abs(h[i] - h[i-1]));
    }

    // 添字注意．
    cout << dp[N-1] << endl;

    return 0;
}