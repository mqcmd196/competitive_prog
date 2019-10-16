#include <bits/stdc++.h>
using namespace std;
 
int main(){
    short N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N-1);
    for(int i=0;i<N-1;i++){
        cin >> B[i];
    }
    int sum = B[0] + B[N-2];

    //A[0] = B[0];
    
    for(int i=1; i<N-1; i++){
        sum += min(B[i-1], B[i]);
        //A[i] = min(B[i-1], B[i]);
    }

    printf("%d\n", sum);

    return 0;
}