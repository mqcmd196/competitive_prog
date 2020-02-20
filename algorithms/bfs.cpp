#include <bits/stdc++.h>
using namespace std;

// input_n 
long N;
 
using Graph = vector<vector<long>>;
vector<long> dist(N, -1);
queue<long> que;

void bfs(const Graph &G, long v){
    dist[0] = 0;
    que.push(0);

    while (!que.empty()){
        long v = que.front();
        que.pop();

        for(int next_v : G[v]){
            if(dist[next_v] != -1) continue;

            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }
}

