    #include<iostream>
    #include<vector>
    using namespace std;



    void beautiful_perm(long long n){
        std:: vector<long> even_numbers = {};
        std:: vector<long> odd_numbers = {};
        for(int i = 1; i <= n; i++){
            if(i %2 == 0){
                even_numbers.push_back(i);
            }
            else{
                odd_numbers.push_back(i);
            }
        }
        even_numbers.insert(even_numbers.end(), odd_numbers.begin(), odd_numbers.end());
        for(int j : even_numbers){
            cout << j << " ";
        }

    }

    int main(){
        long long n;
        cin >> n;

        if (n == 1){
            cout << "1" << endl;
        }
        else if(n ==2 || n == 3){
            cout << "NO SOLUTION" << endl;
        }
        else{
            beautiful_perm(n);
        }
        
        return 0;
    }