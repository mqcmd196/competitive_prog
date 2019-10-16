#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    long Q;
    long K;
    cin >> N;
    cin >> K;
    cin >> Q;
    
    vector<int> A(Q);
    for(int i=0; i<Q; i++){
        cin >> A[i];
    }

    vector<long> point(N, K-Q);

    for(int i=0; i<Q; i++){
        point[A[i] - 1] += 1;
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