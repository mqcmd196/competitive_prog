#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    unsigned long long N, M;
    cin >> S;
    cin >> N >> M;

    char tmp;

    tmp = S.at(N-1);
    S.at(N-1) = S.at(M-1);
    S.at(M-1) = tmp;

    cout << S << endl;

    return 0;
}
