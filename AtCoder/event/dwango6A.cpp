#include <bits/stdc++.h>
using namespace std;
 
int main(){

    short N;
    string X;
    cin >> N;

    vector<string> s(N);
    vector<int> t(N);

    for(short i=0; i<N; i++){
        cin >> s[i];
        cin >> t[i];
    }

    cin >> X;
    
    bool flag = false;
    int time = 0;

    for(short i=0; i<N; i++){
        if(s[i] == X){
            flag = true;
        }else if(flag){
            time += t[i];
        }
    }

    cout << time << endl;

    return 0;
}