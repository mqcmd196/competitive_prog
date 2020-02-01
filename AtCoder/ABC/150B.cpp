#include <bits/stdc++.h>
using namespace std;
 
int main(){
    short N;
    string S;

    cin >> N;
    cin >> S;

    short counter = 0;

    for(short i=0; i<N-2; i++){
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C'){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}