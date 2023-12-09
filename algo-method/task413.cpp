#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N, M, X;
    cin >> N >> M >> X;

    vector<unsigned long long> A(M), B(M);

    for(size_t i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }

    // Nは生徒の人数
    // Xはアルルの番号

    vector<unsigned long long> arr_friends;
    for(size_t i=0; i<M; i++){
        if(A.at(i) == X){
            arr_friends.push_back(B.at(i));
        }else if(B.at(i) == X){
            arr_friends.push_back(A.at(i));
        }
    }

    vector<unsigned long long> result;
    for(auto fri=arr_friends.begin(); fri!=arr_friends.end(); ++fri){
        for(size_t i=0; i<M; i++){
            if (A.at(i) == *fri) {
                result.push_back(B.at(i));
            }else if (B.at(i) == *fri){
                result.push_back(A.at(i));
            }
        }
    }

    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());

    // for(auto& r: result){
    //     cout << "r: " << r <<endl;
    // }

    if(result.size() != 0){
        auto counter = result.size() - 1;
        for(auto fri=arr_friends.begin(); fri!=arr_friends.end(); ++fri){
            if(binary_search(result.begin(), result.end(), *fri)){
                counter--;
            }
        }
        cout << counter << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}
