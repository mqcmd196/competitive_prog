#include <bits/stdc++.h>
using namespace std;
 
int main(){

    short N;
    cin >> N;
    
    short p;
    short q;

    long P = 0;
    long Q = 0;

    for(short i=0; i<N; i++){
        cin >> p;
        P += p * pow(10, i);
    }
    for(short i=0; i<N; i++){
        cin >> q;
        Q += q * pow(10, i);
    }

    // 順列生成
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);
    // cout << v << endl;
    long V = 0;

    long p_counter = 0;
    long q_counter = 0;

    long p_result;
    long q_result;

    do{
        for(int i=0; i<N; i++){
            V += v[i] * pow(10, i);
        }
        if(V==P){p_result = p_counter;}
        if(V==Q){q_result = q_counter;}
        p_counter++;
        q_counter++;
        // cout << V << endl;
        V = 0;
    }while(next_permutation(v.begin(), v.end()));

    cout << abs(p_result - q_result) << endl;    

    return 0;
}