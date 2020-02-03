#include <bits/stdc++.h>
using namespace std;
 
int main(){

    string S;
    cin >> S;

    int result = 0;

    for(int i=0; i<floor(S.size()/2); i++){
        if(S[i] != S[S.size() - 1 - i]){
            result += 1;
        }
    }

    cout << result << endl;

    return 0;
}