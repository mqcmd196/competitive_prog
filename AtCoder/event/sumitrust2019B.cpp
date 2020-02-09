#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int N, X;
    cin >> N;

    X = ceil(((float)N) / 1.08);

    if(floor((float)X * 1.08) == N){
        cout << X << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}