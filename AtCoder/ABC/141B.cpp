#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;
    int even_ans = 1, odd_ans = 1;
    
    for(int i=1; i<S.size(); i+=2){
        if(S[i] == 'R'){
            even_ans = 0;
        }
    }

    for(int i=0; i<S.size(); i+=2){
        if(S[i] == 'L'){
            odd_ans = 0;
        }
    }

    if(even_ans == 1 and odd_ans == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}