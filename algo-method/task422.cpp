#include <bits/stdc++.h>
using namespace std;

int func(int x){
        if (x==0){
            return 0;
        }else{
            return func(x-1) + x;
        }
    }

int main() {

    int N;
    cin >> N;

    cout << func(N) << endl;

    return 0;
}
