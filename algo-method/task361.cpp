#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t N, M;
    cin >> N >> M;
    vector<uint64_t> A(N), B(M);
    for(auto &a : A){
        cin >> a;
    }
    for(auto &b : B){
        cin >> b;
    }

    vector<bool> b_packed(M, false);
    uint64_t result = 0;

    sort(A.rbegin(), A.rend());
    reverse(B.begin(), B.end());

    for(uint64_t i=0; i<N; ++i){
        for(uint64_t j=0; j<M; ++j){
            if(A[i]<=B[j] and !b_packed[j]){
                result += 1;
                b_packed[j] = true;
                break;
            }else if(A[i]>B[j]){
                break;
            }
        }
    }

    cout << result << endl;
}
