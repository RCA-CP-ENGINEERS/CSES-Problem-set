#include<iostream>
using namespace std;

int main(){
    int array[10], i, size, num;

    cin >> size;
    if(size > 10){
        cout << "Overflow"<< endl;
        return 1;
    }

    for(i = 0; i < size; i++){
        cin >> array[i];
    }
    cout << "Enter the element you want to insert at the beginning: ";
    cin >> num;

    for(i = size+1; i >= 0; i--){
        array[i+1] = array[i];
    }
    array[0] = num;
    size++;

    for(i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}