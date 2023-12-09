#include <bits/stdc++.h>
using namespace std;

bool f(unsigned long long i, unsigned long long j, vector<unsigned long long> &A){
    // A_0, ... A_i-1 の中から総和がjと等しくなるよういくつかの数字を選べるか
    // 前からi-1個の数字を用いてjを作ることができる or 前からi-1個の数字を用いてj-A_i-1を作ることができる
    if(i==0){
        if (j==0){
            return true;
        }else{
            return false;
        }
    }else{
        bool flag;
        if(j >= A.at(i-1) and f(i-1, j-A.at(i-1), A)){
            flag = true;
        }
        if(f(i-1, j, A)){
            flag = true;
        }
        return flag;
    }
}

// TODO review more!
int main() {
    unsigned long long N, X;
    cin >> N >> X;

    vector<unsigned long long> A(N);
    for(size_t i=0; i<N; i++){
        cin >> A.at(i);
    }

    if(f(N, X, A)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
