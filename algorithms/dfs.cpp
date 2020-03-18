#include <bits/stdc++.h>
using namespace std;

// input_n 
long N;
 
using Graph = vector<vector<long>>;
vector<bool> seen;

// dfs
void dfs(const Graph &G, long v){
    seen.assign(N, false);
    seen[v] = true;

    for(auto next_v : G[v]){
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}