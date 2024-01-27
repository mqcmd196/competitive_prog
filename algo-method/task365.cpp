#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    struct Vertex{
        int x;
        int y;
        bool visited;
    };
    vector<Vertex> V(N);
    for(auto &v : V){
        cin >> v.x >> v.y; // (x, y) = (v.first, v.second)
        v.visited = false;
    }

    int visited = 0;
    double distance = 0.0;
    int current = 0;

    while(visited < N){
        auto current_v = V[current];
        double dist = DBL_MAX;
        for(auto candidate : V){
            auto tmp_dist = pow(pow((double)candidate.x, 2) + pow((double)candidate.y, 2), 0.5);
            if(candidate.visited and tmp_dist < dist){
                dist = tmp_dist;
            } 
        }

        visited += 1;
    }

}
