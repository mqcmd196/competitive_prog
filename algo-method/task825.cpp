#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers = {3,1,4,1,5,9,2,6,5,3};
    int Q;
    cin >> Q;

    string result = "";

    for(int i=0; i<Q; i++){
        int command;
        cin >> command;
        if(command==0){
            // output
            int k;
            cin >> k;
            result += to_string(numbers.at(k));
            result += "\n";
        }else{
            // write
            int k, v;
            cin >> k >> v;
            numbers.at(k) = v;
        }

    }

    cout << result << endl;

    return 0;
}
