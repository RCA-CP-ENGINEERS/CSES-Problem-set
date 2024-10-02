#include<iostream>
using namespace std;

int main(){
    int array[10], i, size, num, pos;

    cout << "Enter size:" << endl;
    cin >> size;
    if(size > 10){
        cout<< "Everflow" << endl;
        return 1;
    }

    cout << "Enter array elements" << endl;
    for(i = 0; i < size; i++){
        cin >> array[i];
    }
    cout << "Enter number and position" << endl;
    cin >> num;
    cin >> pos;

    if(pos <= 0 || pos > size+1){
        cout << "Invalid position";
    }
    else{
        for(i = size-1; i >= pos-1; i--){
            array[i+1] = array[i];
        }
        array[pos-1] = num;
        size++;

        for(i = 0; i < size; i++){
            cout << array[i] << " ";
        }
    }
}