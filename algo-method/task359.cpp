#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int yen = 0;
    int yen1, yen5;
    bool flag = false;
    for(int i=0; i<=N; ++i){
        for(int j=0; j<=N/5+1; ++j){
            yen = i + 5*j;
            if(yen == N){
                yen1 = i;
                yen5 = j;
                flag = true;
                break;
            }
        }
        if(flag){break;}
    }

    cout << yen1 + yen5 << endl;

    return 0;
}
