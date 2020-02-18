#include <bits/stdc++.h>
using namespace std;
 
int main(){
    short H, W;
    cin >> H >> W;

    vector<vector<char>> S(H, vector<char>(W));

    for(short i=0; i<H; i++){
        for(short j=0; j<W; j++){
            cin >> S[i][j];
        }
    }



    return 0;
}