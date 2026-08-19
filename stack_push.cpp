#include <iostream>
using namespace std;

int main() {
    int plate[5];
    int top = -1;
    top++;
    plate[top] = 10;

    top++;
    plate[top] = 20;

    top++;
    plate[top] = 30;

    cout << "Plates in stack: ";
    for (int i = top; i >= 0; i--) {
        cout << plate[i] << " ";
    }
    return 0;
}
