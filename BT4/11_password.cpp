#include <iostream>
#include <algorithm>
bool check_symmetry(std::string a,std::string save_v){
    int length = a.length();
    int length1 = save_v.length();
    if(length != length1) return false;
    int i = 0;
    reverse(save_v.begin(),save_v.end());
    while(i != length){
        if(a[i] != save_v[i]){
            return false;
        }
        i++;
    }
    return true;
}


int main(){
    int n;
    std::cin >> n;
    std::string s[n];
    std::getline(std::cin,s[0]);
    for(int i = 0 ; i < n ; i++) std::getline(std::cin,s[i]);

    for(int i = 0 ; i < n - 1; i++){
        for (int j = i + 1; j < n ; j++)
        {
            if(check_symmetry(s[i],s[j])){
                int dodai = s[i].length();
                std::cout << dodai << " " << s[i][dodai/2];
                return 0;
            }
        }
    }
    return 0;
}