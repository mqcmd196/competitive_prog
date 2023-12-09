#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; ++i){
        cin >> A.at(i);
    }

    unsigned long long result = 1;
    for(auto it=A.begin(); it!=A.end(); ++it){
        auto first = *it % 10;
        result *= first;
        result = result % 10;
    }
    cout << result % 10 << endl;
    return 0;
}
