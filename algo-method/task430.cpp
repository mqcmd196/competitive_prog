#include <bits/stdc++.h>
using namespace std;

// REVIEW

int func(int n, int l, int r){
    if(l>r){
        return 0;
    }else if(n==1){
        return r - l + 1;
    }else if(r-l+1 == n){
        return 1;
    }else{
        return func(n, l+1, r) + func(n-1, l+1, r);
    }
}


int main() {
    int N, L, R;
    cin >> N >> L >> R;

    auto ans = func(N, L, R);

    cout << ans << endl;

    return 0;
}
