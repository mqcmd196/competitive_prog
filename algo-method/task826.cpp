#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> A(N);
    for(auto &a : A){
        cin >> a;
    }

    cout << A.at(k) << endl;
    cout << A.at(N-k-1) << endl;

    return 0;
}
