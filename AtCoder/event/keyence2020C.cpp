#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int N, K;
    long S;

    cin >> N >> K >> S;

    vector<long> ans(N); 

    if(S < pow(10, 9)){
        for(int i=0; i<N; i++){
            if(i<K){
                ans[i] = S;
            }else{
                ans[i] = S + 1;
            }
        }
    }else if(S == pow(10, 9)){
        for(int i=0; i<N; i++){
            if(i<K){
                ans[i] = S;
            }else{
                ans[i] = 1;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}