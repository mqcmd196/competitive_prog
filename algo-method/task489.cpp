#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N, M;
    cin >> N >> M;

    vector<int64_t> A(N);
    vector<int> X(M);

    for(size_t i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(size_t i=0; i<M; i++){
        cin >> X.at(i);
    }

    sort(A.begin(), A.end());

    for(const auto &x: X){
        cout << A.at(x) << endl;
    }

    return 0;
}
