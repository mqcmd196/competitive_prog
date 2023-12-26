#include <bits/stdc++.h>
using namespace std;
 
int main(){
    stack<int> s;
    queue<int> q;
    s.push(1);
    s.push(2);
    s.push(3);
    printf("%d\n", s.top());
    s.pop();
    printf("%d\n", s.top());

    q.push(1);
    q.push(2);
    q.push(3);
    printf("%d\n", q.front());
    q.pop();
    printf("%d\n", q.front());
    q.pop();
  
    return 0;
}