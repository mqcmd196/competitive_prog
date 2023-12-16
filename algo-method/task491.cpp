#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N, K;
    cin >> N >> K;
    vector<pair<unsigned int, int64_t>> A(N);
    vector<int64_t> B(N);
    for(int64_t i=0; i<N; i++){
        A[i].first = i;
        cin >> A[i].second >> B[i];
    }

    sort(A.begin(), A.end(), [](const auto &a, const auto &b){
        return a.second < b.second;
    });

    int64_t sum = 0;
    int64_t counter = 0;

    // A: pair of food_id and food price -> sorted
    // B: food remains

    for(auto &i : A){
        for(int64_t j=0; j<B[i.first]; ++j){
            if(counter == K){break;}
            sum += i.second;
            counter += 1;
        }
        if(counter == K){break;}
    }

    cout << sum << endl;

    return 0;
}
