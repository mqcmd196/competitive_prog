#include <bits/stdc++.h>
using namespace std;

template <class T>
class minElement{
    private:
        T y;
    public:
        minElement(T arg){
            y = arg;
        }

        void check(T x){
            cout << min(x, y) << endl;
        }
};

int main(){
    return 0;
}
