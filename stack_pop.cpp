#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<"the top element is:"<< s.top()<<endl;
    s.pop();
    cout<<"after pop, top elememt is:"<<s.top();
    return 0;
}
