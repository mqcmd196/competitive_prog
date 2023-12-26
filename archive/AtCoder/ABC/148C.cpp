#include <bits/stdc++.h>
using namespace std;

//最大公約数を求める
long gcd(long a, long b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}
 
int main(){

    long A, B;

    cin >> A;
    cin >> B;

    cout << (A * B) / gcd(A, B) << endl;

    return 0;
}