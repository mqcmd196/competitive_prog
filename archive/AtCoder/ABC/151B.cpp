#include <bits/stdc++.h>
using namespace std;
 
int main(){

    short N, K, M;

    cin >> N;
    cin >> K;
    cin >> M;

    vector<short> A(N-1);

    int sum = 0;

    for(short i=0; i<N-1; i++){
        cin >> A[i];
        sum += A[i];
    }

    int target_sum = N * M;

    if(target_sum - sum > K){
        cout << -1 << endl;
    }else if(target_sum < sum){
        cout << 0 << endl;
    }else{
        cout << target_sum - sum << endl;
    }

    return 0;
}