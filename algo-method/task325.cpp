#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t N;
    cin >> N;

    vector<uint64_t> A(N);
    for(auto &a: A){
        cin >> a;
    }

    vector< vector<uint64_t> > dp(N);
    dp.at(0) = A;
    for(size_t i=1; i<N; ++i){
        vector<uint64_t> vec(N, 0);
        for(size_t j=0; j<N; ++j){
            if(j-1>=0){
                vec.at(j) += dp[i-1][j-1];
            }
            vec.at(j) += dp[i-1][j];
            if(j+1<=N-1){
                vec.at(j) += dp[i-1][j+1];
            }
            vec.at(j) %= 100;
        }
        dp.at(i) = vec;
    }

    cout << dp[N-1][N-1] << endl;

    return 0;
}
