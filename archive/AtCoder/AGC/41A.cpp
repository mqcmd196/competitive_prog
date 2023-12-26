#include <bits/stdc++.h>
using namespace std;
 
int main(){

    long long N, A, B, result;
    cin >> N;
    cin >> A;
    cin >> B;

    result = 0;

    if(abs(A-B) % 2 == 0){
        result = (B - A) / 2;
    }else if(A==1 || A==N || B==1 || B==N){
        result = (B - A + 1) / 2;
    }else if(A-1 > N-B){
        // Bがより右端に近い
        result += N - B + 1;
        A = A + (N - B) + 1;
        B = N;
        result += (B - A) / 2;
    }else{
        // Aがより左端に近い
        result += A - 1 + 1;
        B = B - (A - 1) - 1;
        A = 1;
        result += (B - A) / 2;
    }

    cout << result << endl;

    return 0;
}