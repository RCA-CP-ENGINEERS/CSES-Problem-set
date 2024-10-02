#include<iostream>
using namespace std;


int main(){
    string n;
    cin >> n;
     int current_length = 1;
     int max_length = 0;

    for(int i = 1; i < n.length(); i++){
        if(n[i] == n[i-1]){
            current_length++;

        }
        else{
            if(current_length > max_length){
                max_length = current_length;
            }
            current_length = 1;
        } 
    }
     if(current_length > max_length){
                max_length = current_length;
            }

    cout << max_length;
    return 0;
}