#include <bits/stdc++.h>
using namespace std;

int main() {

    u_short N, M;
    cin >> N >> M;

    vector<u_short> A(N);
    for(auto &a: A){
        cin >> a;
    }

    vector<int64_t> dp(N);

    dp.at(0) = 0;

    for(size_t i=1; i<N; ++i){
        vector<int64_t> costs(min((size_t)M, i)+1, numeric_limits<int64_t>::max());
        for(size_t j=1; j<costs.size(); ++j){
            costs[j] = dp[i-j] + j*A[i];
        }
        auto arr_min = *min_element(costs.begin(), costs.end());
        dp[i] = arr_min;
    }

    cout << dp[N-1] << endl;

    return 0;
}
