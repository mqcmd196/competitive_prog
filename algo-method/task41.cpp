#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N;
    cin >> N;

    vector< vector<int64_t> > A(N);
    for(auto &a: A){
        vector<int64_t> elem(3);
        cin >> elem.at(0) >> elem.at(1) >> elem.at(2);
        a = elem;
    }

    vector<vector<int64_t>> dp(N);
    dp.at(0) = A.at(0);
    for(size_t i=1; i<N; ++i){
        vector<int64_t> vec3(3, 0);
        vec3.at(0) += max(dp[i-1][1]+A[i][0], dp[i-1][2]+A[i][0]);
        vec3.at(1) += max(dp[i-1][0]+A[i][1], dp[i-1][2]+A[i][1]);
        vec3.at(2) += max(dp[i-1][0]+A[i][2], dp[i-1][1]+A[i][2]);
        dp.at(i) = vec3;
    }

    cout << *max_element(dp.at(N-1).begin(), dp.at(N-1).end()) << endl;

    return 0;
}
