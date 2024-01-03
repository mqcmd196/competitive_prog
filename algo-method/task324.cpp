#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<uint64_t> A(4);
    for(auto &a: A){
        cin >> a;
    }
    vector< vector<uint64_t> > dp(4);

    dp.at(0) = A;

    for(size_t i=1; i<4; ++i){
        vector<uint64_t> vec(4, 0);
        for(size_t j=0; j<4; ++j){
            if(j-1>=0){
                vec.at(j) += dp[i-1][j-1];
            }
            vec.at(j) += dp[i-1][j];
            if(j+1<=3){
                vec.at(j) += dp[i-1][j+1];
            }
        }
        dp.at(i) = vec;
    }

    cout << dp[3][3] << endl;

    return 0;
}
