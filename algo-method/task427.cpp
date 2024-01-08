#include <bits/stdc++.h>
using namespace std;

bool f(int64_t i, int64_t j, vector<int64_t> &A){
    // A_0, ... A_i-1 の中から総和がjと等しくなるよういくつかの数字を選べるか
    // 前からi-1個の数字を用いてjを作ることができる or 前からi-1個の数字を用いてj-A_i-1を作ることができる
    if(i==0){
        if (j==0){
            return true;
        }else{
            return false;
        }
    }else{
        bool flag = false;
        if(j >= A.at(i-1) and f(i-1, j-A.at(i-1), A)){
            flag = true;
        }
        if(f(i-1, j, A)){
            flag = true;
        }
        return flag;
    }
}

int main() {
    int64_t N, X;
    cin >> N >> X;

    vector<int64_t> A(N);
    for(auto &a: A){
        cin >> a;
    }

    if(f(N, X, A)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
