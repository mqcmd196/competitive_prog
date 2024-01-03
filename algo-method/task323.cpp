#include <bits/stdc++.h>
using namespace std;

int main() {
    u_short N, M;
    cin >> N >> M;

    vector<u_short> D(M);
    for(auto &d: D){
        cin >> d;
    }

    vector<bool> dp(N+1, false);
    dp.at(0) = true;

    for(size_t i=1; i<N+1; ++i){
        for(auto d: D){
            if((u_short)i-d >= 0){       // i-d should be >= 0
                if(dp[i-d]){
                    dp[i] = true;
                }
            }else{
                continue;
            }
        }
    }

    if(dp.at(N)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
