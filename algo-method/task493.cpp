#include <bits/stdc++.h>
using namespace std;

map<string, unsigned int> order{};

bool compare(const pair<string, pair<unsigned int, unsigned int> > larger,
          const pair<string, pair<unsigned int, unsigned int> >smaller){
    // first -> mathmatics
    // second -> englisht
    if(larger.second.first > smaller.second.first){
        return true;
    }else if(larger.second.first < smaller.second.first){
        return false;
    }else{
        // mathmatics scores are same
        if((larger.second.first + larger.second.second) > (smaller.second.first + smaller.second.second)){
            return false;
        }else if((larger.second.first + larger.second.second) < (smaller.second.first + smaller.second.second)){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    unsigned int N;
    cin >> N;

    vector<pair<string, pair<unsigned int, unsigned int> > > SAB(N);

    for(size_t i=0; i<N; ++i){
        cin >> SAB[i].first >> SAB[i].second.first >> SAB[i].second.second;
        order[SAB[i].first] = i;
    }

    stable_sort(SAB.begin(), SAB.end(), compare);

    for(const auto sab: SAB){
        cout << sab.first << " " << sab.second.first << " " << sab.second.second << endl;
    }

    return 0;
}
