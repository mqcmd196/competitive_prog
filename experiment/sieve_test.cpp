//エラトステネスの篩
#include <bits/stdc++.h>
using namespace std;
 
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
    vector<long> numbers;
    numbers = sieve(120);

    for(int i=0; i<numbers.size(); i++){
        cout << numbers[i] << endl;
    }
    return 0;
}