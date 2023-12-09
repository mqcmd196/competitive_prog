#include <bits/stdc++.h>
using namespace std;

unsigned long long func(unsigned long long x, vector<unsigned long long> &fib){
    if (x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else if (fib.at(x) != -1){
        return fib.at(x);
    }else{
        auto tmp = func(x-1, fib) + func(x-2, fib);
        fib.at(x) = tmp;
        return fib.at(x);
    }
}

int main() {

    int N;
    cin >> N;

    vector<unsigned long long> fib(N+1, -1);
    fib.at(0) = 0;
    fib.at(1) = 1;

    cout << func(N, fib) << endl;

    return 0;
}
