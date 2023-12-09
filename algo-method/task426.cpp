#include <bits/stdc++.h>
using namespace std;

int func(int min, int x){
        if (x==min){
            return min;
        }else{
            return func(min, x-1) + x;
        }
    }

int main() {

    int A, B;
    cin >> A >> B;

    cout << func(A, B) << endl;

    return 0;
}
