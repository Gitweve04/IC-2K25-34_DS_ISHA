#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elemets:  ";
    cin>> n;
    
    int arr[n];
    cout << "Enter"<<n<<"elements of the array:" << endl;
    for (int i =0,i < n, i++){
        cin>> arr[i];
    }
    cout << "the array is: ";
    for( int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}  
    
