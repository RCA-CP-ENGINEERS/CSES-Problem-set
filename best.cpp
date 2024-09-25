#include <bits/stdc++.h>
typedef long long ll;
 
using namespace std;
int main() {
    ll N;
    cin >> N;
    
    while(N > 1){
        cout << N << " ";
        if(N&1){
            N *= 3;
            N++;
        }else{
            N /= 2;
        }
    }
    cout << N;
    return 0;
}
