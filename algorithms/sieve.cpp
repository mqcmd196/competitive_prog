#include <bits/stdc++.h>
using namespace std;
 
vector<int> sieve(long N){
    vector<long> search_list(N-1);
    vector<long> prime_list;

    for(long i=0; i<N-1; i++){
        search_list[i] = i + 2;
    }

    for(long i=0; i<sqrt(N) + 1; i++){
        prime_list.push_back(search_list[i]);
        for(long j=0; j<prime_list.size(); j++){{
            if search_list[i] % prime_list[j] = 0{
                search_list.
            }
        }}
    }
    

}