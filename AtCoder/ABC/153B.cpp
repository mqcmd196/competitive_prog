#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    long H;

    cin >> H;
    cin >> N;
    long sum_damage = 0;

    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum_damage += A[i];
    }
    
    if(sum_damage >= H){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}