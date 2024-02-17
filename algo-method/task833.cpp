//TODO REVIEW
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for(size_t i=0; i<N; ++i){
        cards.at(i) = i+1;
    }

    while(cards.size() > 1){
        cards.erase(cards.begin());
        cards.push_back(cards.front());
        cards.erase(cards.begin());
    }

    cout << cards.front() << "\n";

    return 0;
}
