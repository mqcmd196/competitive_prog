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
    dp[0][N-1] = A[0][N-1];

    for(int i=0; i<N; ++i){
        for(int j=N-1; j>=0; --j){
            if(i-1>=0 and j+1<N){
                dp[i][j] = min(dp[i][j+1]+A[i][j], dp[i-1][j]+A[i][j]);
            }else if(i-1<0 and j+1<N){
                dp[i][j] = dp[i][j+1] + A[i][j];
            }else if(i-1>=0 and j+1>=N){
                dp[i][j] = dp[i-1][j] + A[i][j];
            }
        }
    }

    cout << dp[N-1][0] << endl;

    return 0;
}
