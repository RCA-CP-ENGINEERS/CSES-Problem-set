// You are given a DNA sequence: a string consisting of characters A, C, G, and T.
//  Your task is to find the longest repetition in the sequence.
//  This is a maximum-length substring containing only one type of character.

// Input
// The only input line contains a string of n characters.

// Output
// Print one integer: the length of the longest repetition.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3

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