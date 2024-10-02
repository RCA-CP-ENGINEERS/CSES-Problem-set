#include<iostream>
using namespace std;


void function(int n){
    if(n == 1){
        return;
    }
    function(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cout << "Enter a number"<< endl;
    cin >> n;
    cout << endl;
    function(n);
    return 0;
}