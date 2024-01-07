#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector< vector<int> > A(N, vector<int>(N));
    for(auto &a : A){
        for(auto &b : a){
            cin >> b;
        }
    }

    vector< vector<int> > dp(N, vector<int>(N, 0));
    dp[0][0] = A[0][0];

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(i-1>=0 and j-1>=0){
                dp[i][j] = max(dp[i][j-1]+A[i][j], dp[i-1][j]+A[i][j]);
            }else if(i-1>=0 and j-1<0){
                dp[i][j] = dp[i-1][j] + A[i][j];
            }else if(j-1>=0 and i-1<0){
                dp[i][j] = dp[i][j-1] + A[i][j];
            }
        }
    }

    cout << dp[N-1][N-1] << endl;

    return 0;
}
