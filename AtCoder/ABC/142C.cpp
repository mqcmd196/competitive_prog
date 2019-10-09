#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;

    vector<int> A(N, 0);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    vector<int> indices(N);
    iota(indices.begin(), indices.end(), 0);

    sort(indices.begin(), indices.end(), [&A](size_t i1, size_t i2){
        return A[i1] < A[i2];
    });
    
    for(auto v : indices){
        cout << v+1 << " ";
    }
    cout << endl;

    return 0;
}