#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;

    vector<long> X(N);
    vector<long> L(N);

    for(int i=0; i<N; i++){
        cin >> X[i];
        cin >> L[i];
    }

    int counter = N;

    for(long i=0; i<N; i++){
        if((X[i]-L[i] <= X[i-1]) || (X[i]+L[i] >= X[i+1])){
            counter -= 1;
            X[i] = -10000000;
        }
    }

    cout << counter << endl;

    return 0;
}