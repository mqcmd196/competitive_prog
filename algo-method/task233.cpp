#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    vector<int> A(X), B(Y), C(Z);
    for(int i=0; i<X; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<Y; i++){
        cin >> B.at(i);
    }
    for(int i=0; i<Z; i++){
        cin >> C.at(i);
    }

    auto counter = 0;

    for(auto ci=C.begin(); ci!=C.end(); ++ci){
        for(auto bi=B.begin(); bi!=B.end(); ++bi){
            for(auto ai=A.begin(); ai!=A.end(); ++ai){
                if(*ci == *ai + *bi){
                    counter += 1;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}
