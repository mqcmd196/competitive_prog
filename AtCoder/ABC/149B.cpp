#include <bits/stdc++.h>
using namespace std;
 
int main(){

    long A;
    long B;
    long K;

    cin >> A;
    cin >> B;
    cin >> K;

    if(A>=K){
        cout << A - K;
        cout << " ";
        cout << B << endl;
    }else if(A+B>=K){
        cout << 0;
        cout << " ";
        cout << B - (K - A) << endl;
    }else{
        cout << 0;
        cout << " ";
        cout << 0 << endl;
    }

    return 0;
}