#include <bits/stdc++.h>
using namespace std;

enum MEM {UNDEF, T, F};

bool f(int64_t i, int64_t j, vector<int64_t> A, vector<vector<MEM>> &memo){
    if(i==0){
        if (j==0){
            return true;
        }else{
            return false;
        }
    }else if(memo[i][j] != MEM::UNDEF){
        if(memo[i][j] == MEM::T){
            return true;
        }else{
            return false;
        }
    }
    else{
        bool flag = false;
        memo[i][j] = MEM::F;
        if(j >= A.at(i-1) and f(i-1, j-A.at(i-1), A, memo)){
            flag = true;
            memo[i][j] = MEM::T;
        }
        if(f(i-1, j, A, memo)){
            flag = true;
            memo[i][j] = MEM::T;
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

    vector<vector<MEM>> memo(X+1, vector<MEM>(X+1, MEM::UNDEF));

    if(f(N, X, A, memo)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
