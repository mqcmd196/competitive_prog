#include <bits/stdc++.h>
using namespace std;
 
int main(){
    short a, b;

    cin >> a;
    cin >> b;

    long A = 0, B = 0;

    // aをb回並べる
    for(int i=0; i<b; i++){
        A += pow(10, i)*a;
    }

    // bをa回並べる
    for(int i=0; i<a; i++){
        B += pow(10, i)*b;
    }

    if(A >= B){
        cout << A << endl;
    }else{
        cout << B << endl;
    }

    return 0;
}