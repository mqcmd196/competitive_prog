#include <bits/stdc++.h>
using namespace std;
 
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

int main(){
    long n = 100;
    vector<long> div;

    div = divisors(n);

    for(int i=0; i<div.size(); i++){
        printf("%d\n", div[i]);
    }

    return 0;
}