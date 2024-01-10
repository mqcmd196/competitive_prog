#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> func(int n, int l, int r){
    vector<vector<int>> ans(0);
    if(l>r){
        return ans;
    }else if(n==0){
        ans.emplace_back(vector<int>(0));
        return ans;
    }else{
        vector<vector<int>> arr_n = func(n-1, l, r);
        for(auto elem : arr_n){
            elem.insert(elem.begin(), l);
            ans.push_back(elem);
        }
        auto arr_l = func(n, l+1, r);
        for(auto elem: arr_l){
            ans.push_back(elem);
        }
        return ans;
    }
}

int main() {
    int N, L, R;
    cin >> N >> L >> R;

    auto ans = func(N, L, R);
    sort(ans.begin(), ans.end());

    for(auto elem1: ans){
        for(auto elem2: elem1){
            cout << elem2 << " ";
        }
        cout << endl;
    }

    return 0;
}
