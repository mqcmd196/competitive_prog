#include <bits/stdc++.h>
using namespace std;

int main() {
    u_short N;
    cin >> N;

    vector<int64_t> dp(N+1, 0);

    dp.at(1) = 1;
    if(N>=2){
        dp.at(2) = 2;
    }
    if(N>=3){
        dp.at(3) = 4;
    }

    for(size_t i=4; i<N+1; ++i){
        dp.at(i) += dp.at(i-1);
        dp.at(i) += dp.at(i-2);
        dp.at(i) += dp.at(i-3);
    }

    cout << dp.at(N) << endl;

    return 0;
}
