#include <bits/stdc++.h>
using namespace std;

int main() {
    u_short N;
    cin >> N;

    vector<int64_t> dp(N+1);

    dp.at(0) = 1;
    dp.at(1) = 1;

    for(size_t i=2; i<N+1; ++i){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp.at(N) << endl;

    return 0;
}
