#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    if (s.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;
}
