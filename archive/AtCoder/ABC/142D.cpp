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

vector<long> sieve(long N){
    vector<long> search_list(N-1);
    vector<long> prime_list;
    long prime_number;

    //2 ~ Nの整数を昇順で格納
    for(long i=0; i<N-1; i++){
        search_list[i] = i + 2;
    }

    //sqrt(N)まで実行
    for(long i=0; i<sqrt(N)+1; i++){
        //素数リストに探索リストの先頭の数を追加
        //なぜ! = 1としたかは後述
        if(search_list[i] != 1){
            prime_number = search_list[i];
            prime_list.push_back(prime_number);
        }        
        //その倍数を探索リストから篩い落とす
        for(long j=0; j<search_list.size(); j++){
            if(search_list[j] % prime_number == 0){
                //.eraseはO(N)なので1を代入することで代用
                search_list[j] = 1;
            }
        }
    }

    //探索リストに残った数を素数リストに追加
    for(long i=0; i<search_list.size(); i++){
        if(search_list[i] != 1){
            prime_list.push_back(search_list[i]);
        }
    }

    return prime_list;
}
 
int main(){

    long A, B;
    cin >> A;
    cin >> B;

    long prime = 0;
    long g = gcd(A, B);
    vector<long> search_list = divisors(g, true);
    vector<long> prime_list;

    for(long i=1; i<search_list.size(); i++){
        if(search_list[i] != 1){
            prime = search_list[i];
            prime_list.push_back(prime);
        }

        for(long j=0; j<search_list.size(); j++){
            if(search_list[j] % prime == 0){
                search_list[j] = 1;
            }
        }
    }

    for(long i=0; i<search_list.size(); i++){
        if(search_list[i] != 1){
            prime_list.push_back(search_list[i]);
        }
    }

    cout << prime_list.size() + 1 << endl;

    return 0;
}