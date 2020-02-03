#include <bits/stdc++.h>
using namespace std;
 
int main(){

    short N;
    cin >> N;
    string S, T;
    cin >> S;
    cin >> T;
    string result(2*N, 'a');

    for(int i=0; i<(2*N - 1); i+=2){
        result[i] = S[i/2];
        result[i+1] = T[i/2];
    }

    cout << result << endl;

    return 0;
}