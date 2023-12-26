#include <bits/stdc++.h>
using namespace std;
 
int main(){

    long N;
    cin >> N;

    vector<long> P(N);
    for(long i=0; i<N; i++){
        cin >> P[i];
    }

    long counter = 0;
    int min_until_i = P[0];

    // おしりの値とそれまでのminを比較してminを更新していけばよい．そのときcounterを増やす
    
    for(long i=0; i<N; i++){
        if(P[i] <= min_until_i){
            min_until_i = P[i];
            counter += 1;
        }
    }
    

    cout << counter << endl;

    return 0;
}