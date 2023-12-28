#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N;
    cin >> N;
    vector<int64_t> A(N);
    for(auto &n : A){
        cin >> n;
    }

    vector<int64_t> dp(N);

    dp[0] = 0;
    dp[1] = A[1];

    for(size_t k=2; k<N; ++k){
        if(dp[k-1] + A[k] < dp[k-2] + 2 * A[k]){
            dp[k] = dp[k-1] + A[k];
        }else{
            dp[k] = dp[k-2] + 2 * A[k];
        }
        // dp[k] = min(dp[k-1] + A[k], dp[k-2] + 2*A[k]);
    }

    cout << dp[N-1] << endl;

    return 0;
}
