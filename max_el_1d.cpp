#include <iostream>
using namespace std;
int main(){
    int arr[100], n, max;
    cout << "enter the number of elements: ";
    cin>> n;

    cout << "enter the elements: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];

    }
    max = arr[0];
    for (int i = 1; i<n; i++){
        if( arr[i]> max){
            max = arr[i];
        }
    }
    cout << "Maximum element = " << max;
    return 0;
}
