#include <bits/stdc++.h>
using namespace std;

int main() {
     int N, K;
     cin >> N >> K;
     vector<int> A(N);
     for(size_t i=0; i<N; i++){
         cin >> A.at(i);
     }

     sort(A.begin(), A.end(), [](int a, int b){return a>b;});

     auto result = 0;
     for(size_t i=0; i<K; i++){
         result += A.at(i);
     }

     cout << result << endl;

    return 0;
}
