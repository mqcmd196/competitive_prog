#include <bits/stdc++.h>
using namespace std;

void dfs(start_i, start_j, goal_i, goal_j){
    stack<int> s;
    visited[start_i][start_j] = 1
    
    
}

int main(){
    int H, W;
    cin >> H;
    cin >> W;
    vector<vector<int>> c(H, vector<int>(W));
    // 0 -> not visited
    vector<vector<int>> visited(H, vector<int>(W, 0));


    for(int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            cin >> c[i][j];
        }
    }

        


    return 0;
}