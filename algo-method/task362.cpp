#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int day = 0;
    for(day; N>0; ++day){
        if(N%2==0){  // Plan 2
            N /= 2;
        }else{  // Plan 1
            N -= 1;
        }
    }

    cout << day << endl;

    return 0;
}
