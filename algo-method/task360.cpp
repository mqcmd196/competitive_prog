#include <bits/stdc++.h>
using namespace std;

// REVIEW check different answer

int main() {
    int X;
    vector<int> A(4);

    cin >> X;
    for(auto &a : A){
        cin >> a;
    }

    int n_coin = 0;
    bool flag = false;
    for(auto n1=0; n1<=A.at(3); ++n1){
        for(auto n5=0; n5<=A.at(2); ++n5){
            for(auto n10=0; n10<=A.at(1); ++n10){
                for(auto n50=0; n50<=A.at(0); ++n50){
                    if(n1*1+n5*5+n10*10+n50*50 == X){
                        n_coin = n1 + n5 + n10 + n50;
                        flag = true;
                    }
                    if(flag){break;}
                }
                if(flag){break;}
            }
            if(flag){break;}
        }
        if(flag){break;}
    }

    cout << n_coin << endl;
}
