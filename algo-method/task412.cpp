#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N, M;
    cin >> N >> M;

    vector<unsigned long long> A(M), B(M);
    for(size_t i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<bool>> ff_array(N, vector<bool>(N, false));

    for(size_t i=0; i<M; i++){
        ff_array.at(A.at(i)).at(B.at(i)) = true;
    }

    for(size_t i=0; i<N; i++){
        for(size_t j=0; j<N; j++){
            if(ff_array.at(i).at(j)){
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
