#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K;
    cin >> N;
    cin >> K;

    vector<int> h(N,0);
    for(int i=0; i<N; i++){
        cin >> h[i];
    }

    int ans = 0;

    for (int i=0; i<N; i++){
        if(h[i] >= K){
            ans += 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}