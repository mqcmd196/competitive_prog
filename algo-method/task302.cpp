#include <bits/stdc++.h>
using namespace std;

int main() {
    u_short N, X, Y;
    cin >> N >> X >> Y;

    vector<int64_t> A(N);
    A.at(0) = X;
    A.at(1) = Y;

    for(size_t i=2; i<N; ++i){
        A[i] = (A[i-1] + A[i-2]) % 100;
    }

    cout << A[N-1] << endl;

    return 0;
}
