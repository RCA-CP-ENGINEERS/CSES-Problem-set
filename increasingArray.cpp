#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector <int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    long long moves = 0;

    for(int j = 1; j <n ; j++){
        if(array[j] < array[j-1]){
            moves += array[j-1] - array[j];
            array[j] = array[j-1];
        }

    }
    cout << moves << endl;
    return 0;    
}