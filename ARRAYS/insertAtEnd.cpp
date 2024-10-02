#include<iostream>
using namespace std;

int main(){
    int array[10], i, size, num;

    cin >> size;
    if(size > 10){
        cout << "Overflow" << endl;
        return 1;
    }

    for(i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << "Enter number: ";
    cin >> num;

    array[size] = num;
    size++;
    for(i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}