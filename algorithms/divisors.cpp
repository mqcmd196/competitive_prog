//約数を求める
#include <bits/stdc++.h>
using namespace std;

//The order is sqrt(n). If sore_mode is true, the order is sqrt(n)*log(n).
vector<long> divisors(long n, bool sort_mode = false){
    vector<long> result;
    for(long i = 1; i < ceil(sqrt((long double)n)); i++){
        if(n % i == 0){
            result.push_back(i);{
                if (i != n / i){
                    result.push_back(n/i);
                }
            }
        }
    }
    if(sort_mode == true){
        sort(result.begin(), result.end());
    }
    return result;
}