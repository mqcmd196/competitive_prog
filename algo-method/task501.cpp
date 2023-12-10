#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N;
    cin >> N;
    vector<double> A(N);
    for(size_t i=0; i<N; i++){
        long long x;
        cin >> x;
        A.at(i) = x;
    }

    sort(A.begin(), A.end());

    if(N % 2 == 0){
        cout << (float)(A.at(N/2 - 1) + A.at(N/2)) / 2. << endl;
    }else{
        cout << (A.at((N-1)/2)) << endl;
    }

    return 0;
}
