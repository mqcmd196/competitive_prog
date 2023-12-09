#include <bits/stdc++.h>
using namespace std;

int func(int x){
        if (x==0){
            return 0;
        }else if(x==1){
            return 1;
        }else{
            return func(x-1) + func(x-2);
        }
    }

int main() {

    int N;
    cin >> N;

    cout << func(N) << endl;

    return 0;
}
