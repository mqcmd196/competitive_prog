#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;

    vector<long> X(N);
    vector<long> L(N);
    vector<long> fin_x(N);
    // fin_xのindexを格納する配列
    vector<size_t> indices(fin_x.size());
    iota(indices.begin(), indices.end(), 0);

    for(int i=0; i<N; i++){
        cin >> X[i];
        cin >> L[i];
        fin_x[i] = X[i] + L[i];
    }

    sort(indices.begin(), indices.end(), [&fin_x](size_t i1, size_t i2){
        return fin_x[i1] < fin_x[i2];
    });
    
    int counter = 0;
    long end_x = -10000000;

    for(int i=0; i<N; i++){
        // cout << indices[i] << endl;
        if(end_x <= X[indices[i]] - L[indices[i]]){
            counter++;
            end_x = X[indices[i]] + L[indices[i]];
            // cout << end_x << endl;
        }
    }
    
    cout << counter << endl;

    return 0;
}