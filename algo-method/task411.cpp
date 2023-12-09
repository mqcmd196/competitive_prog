#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<string> S(N);

    for(int i=0; i<N; i++){
        cin >> S.at(i);
    }

    if(S.at(A).at(B) == 'o'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
