#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;

    long long sum_of_given = 0;
    for(int i = 0; i < n -1; i++){
        int x;
        cin >> x;
        sum_of_given += x;
    }
    cout << total_sum - sum_of_given << endl;
    return 0;
}

