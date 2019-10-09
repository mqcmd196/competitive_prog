#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a(20);

bool dfs(int i, int sum){
    if(i == n) return sum == k;

    if (dfs(i + 1, sum)) return true;

    if (dfs(i + 1, sum + a[i])) return true;

    return false;
}

void solve(){
    if (dfs(0, 0)) printf("YES\n");
    else printf("NO\n");
}
 
int main(){
    int c;
    int l = 0;
    

    cin >> n;
    while (cin >> l){
        a[c] = l;
        c++;
        if(c >= n){
            break;
        }
    }
    cin >> k;
    
    solve();
    return 0;
}