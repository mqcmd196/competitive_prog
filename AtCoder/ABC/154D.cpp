#include <bits/stdc++.h>
using namespace std;
 
int main(){

    long N, K;

    cin >> N;
    cin >> K;

    // vector<long long> p(N);
    long p;
    vector<long long> sum_list(N+1);
    sum_list[0] = 0;

    for(long i=0; i<N; i++){
        cin >> p;
        sum_list[i+1] += p + sum_list[i]; 
    }

    long long ans = 0;
    long long exp = 0;

    for(long i=0;i < (N-K+1); i++){
        exp = sum_list[i+K] - sum_list[i] + K;
        if(exp > ans){
            ans = exp;
        }
    }

    cout << (double)ans / 2.0 << endl;

    return 0;
}