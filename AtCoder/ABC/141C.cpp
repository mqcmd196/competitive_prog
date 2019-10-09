#include <bits/stdc++.h>
using namespace std;

int wrong_point(int i, int n){
    if(i == n){
        return 0;
    }else{
        return 1;
    }
}
 
int main(){
    int N, Q;
    long K;
    cin >> N, K, Q;
    
    vector<int> A(Q);
    for(int i=0; i<Q; i++){
        cin >> A[i];
    }

    vector<long> point(N, K);

    for(int i=0; i<Q; i++){
        for(int j=0; j<N; j++){
            //ここ直せ
            point[j] - wrong_point(j, A[i]);
        }
    }

    for(int i=0; i<N; i++){
        if(point[i] <= 0){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }

    return 0;
}