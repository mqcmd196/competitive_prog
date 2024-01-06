#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    for(auto &s: S){
        cin >> s;
    }

    vector<int> tmp(N, 0);
    vector< vector<int> > dp(N, tmp);

    dp[0][0] = 1;

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(j-1>=0 && S[i][j-1] == '.'){
                 dp[i][j] += dp[i][j-1];
             }
             if(i-1>=0 && S[i-1][j] == '.'){
                 dp[i][j] += dp[i-1][j];
             }
        }
    }

    cout << dp[N-1][N-1] << endl;

    return 0;
}
