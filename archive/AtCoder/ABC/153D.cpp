#include <bits/stdc++.h>
using namespace std;
 
int main(){

    long long H;
    short m;
    cin >> H;

    for(short i=0; i<50; i++){
        if(pow(2, i)<=H && H<pow(2, i+1)){
            m = i;
            break;
        }
    }
    
    long long ans = pow(2, m+1) - 1;

    cout << ans << endl; 

    return 0;
}