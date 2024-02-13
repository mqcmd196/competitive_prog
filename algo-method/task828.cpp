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
        cin >> q.first;
        if(q.first == 0){
            cin >> q.second;
        }
    }

    for(const auto q: query){
        if(q.first == 0){
            A.push_back(q.second);
        }else{
            if(A.empty()){
                cout << "Error" << "\n";
            }else{
                cout << A.back() << "\n";
                A.pop_back();
            }
        }
    }

    return 0;
}
