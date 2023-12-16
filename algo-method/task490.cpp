#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    vector<int64_t> A(N);

    for(int64_t i=0; i<N; i++){
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    vector<int64_t> combination_diff(N-K+1);

    for(int64_t i=0; i<N-K+1; i++){
        auto diff = A.at(i+K-1) - A.at(i);
        combination_diff.at(i) = diff;
    }

    sort(combination_diff.begin(), combination_diff.end());

    cout << combination_diff.at(0) << endl;

    return 0;
}
