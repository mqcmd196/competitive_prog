#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}

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

    long A, B;
    cin >> A;
    cin >> B;

    long g = gcd(A, B);
    vector<long> cd;

    cd = divisors(g);

    

    return 0;
}