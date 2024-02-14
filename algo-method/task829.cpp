#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &a: A){
        cin >> a;
    }
    int Q;
    cin >> Q;

    for(int q=0; q<Q; ++q){
        int command;
        cin >> command;
        if(command==0){ // insert
            int k, v;
            cin >> k >> v;
            A.insert(A.begin() + k, v);
        }else if(command==1){   // erase
            int k;
            cin >> k;
            A.erase(A.begin() + k);
        }else{ // count
            int v;
            cin >> v;
            cout << count(A.begin(), A.end(), v) << "\n";
        }
    }

    return 0;
}
