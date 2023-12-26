#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int N, K;
    
    cin >> N;
    cin >> K;

    vector<long> H(N);

    for(int i=0; i<N; i++){
        cin >> H[i];
    }

    // sort
    sort(H.begin(), H.end(), greater<long>());

    long n_attack = 0;

    if(K >= N){
        cout << 0 << endl;
    }else{
        for(int i=K; i<N; i++){
            n_attack += H[i];
        }
        cout << n_attack << endl;
    }

    return 0;
}