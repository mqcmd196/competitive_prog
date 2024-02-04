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
    vector<pair<int, int>> query(Q);
    for(auto &q: query){
        cin >> q.first >> q.second;
    }

    for(const auto q: query){
        if(q.first == 0){
            // output
            if(q.second > A.size() - 1){
                cout << "Error" << "\n";
            }else{
                cout << A.at(q.second) << "\n";
            }
        }else{
            // push
            A.push_back(q.second);
        }
    }
    return 0;
}
