#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    auto counter = 0;
    for(int x=0; x<N-1; ++x){
        for(int y=x+1; y<N; ++y){
            if(S.at(x) == S.at(y)){
                counter += 1;
            }
        }
    }
    cout << counter << endl;

    return 0;
}
