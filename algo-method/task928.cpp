#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N;
    cin >> N;

    vector<pair<int64_t, int64_t>> LR(N);

    for(size_t i=0; i<N; ++i){
        cin >> LR[i].first >> LR[i].second;
    }

    // the class i starts at L_i, end at R_i
    sort(LR.begin(), LR.end(), [](const auto &a, const auto &b){
        return a.first < b.first;
    });

    vector<int64_t> merged(2*N);

    for(size_t i=0; i<N; ++i){
        merged[2*i] = LR[i].first;
        merged[2*i + 1] = LR[i].second;
    }

    bool flag = true;

    for(size_t i=1; i<2*N; ++i){
        if(merged[i-1] > merged[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
