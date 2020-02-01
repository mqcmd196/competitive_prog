#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int N, M;
    cin >> N;
    cin >> M;

    vector<int> p(M);
    vector<string> S(M);

    for(int i=0; i<M; i++){
        cin >> p[i];
        cin >> S[i];
    }

    // vector<int> wa_time(N, 0);
    vector<bool> ac_or_not(N, false);
    vector<int> tmp_wa_number(N, 0);
    
    int wa_number = 0;
    int correct_number = 0;

    for(int i=0; i<M; i++){
        if((ac_or_not[p[i] - 1] == false) && (S[i] == "WA")){
            tmp_wa_number[p[i] - 1] += 1;
        }else if((ac_or_not[p[i] - 1] == false) && (S[i] == "AC")){
            correct_number += 1;
            wa_number += tmp_wa_number[p[i] - 1];
            ac_or_not[p[i] - 1] = true;
        }
    }

    cout << correct_number;
    cout << " ";
    cout << wa_number << endl;

    return 0;
}