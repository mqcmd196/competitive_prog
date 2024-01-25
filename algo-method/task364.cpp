#include <bits/stdc++.h>
using namespace std;

// REVIEW

int main() {
    int N;
    cin >> N;

    int result = 0;

    while(N){
        if(N%3==0){
            N /= 3;
        }else{
            N--;
        }
        result += 1;
    }

    cout << result << endl;

    return 0;
}
