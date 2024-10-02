#include<iostream>
using namespace std;


// This is the array traversal algorithm
int main(){
    int *ptr, i , size;
    cout << "Enter the size of the array: ";
    cin >> size;

// // Static memory allocation
//     if(size > 5) {
//         cout << "Error: The size must be 5 or less" << endl;
//         return 1;
//     }
    ptr = new int[size];

    cout << "Enter the elements of the array :" << endl;
    for(i = 0; i < size; i++){
        cin >> ptr[i];
    }
    cout << "The elements of the array are :" << endl;
    for(i = 0; i < size; i++){
        cout << ptr[i] << " ";
    }

    return 0;

}