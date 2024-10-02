#include<iostream>
using namespace std;

int main(){
    int array[10], i, size, num, pos;

    cin >> size;
    if(size > 10) {
        cout << "Overflow" ;
        return 1;
    }

    for(i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "Enter number and position" << endl;
    cin >> num;
    cin >> pos;

    if(pos <= 0 || pos >= size+1){
        cout << "Invalid position";
    }
        array[size] = array[pos-1];
        array[pos-1] = num;
        size++;

        for(i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        return 0;
    
}