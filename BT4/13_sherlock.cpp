#include <iostream>

#define Nmax 100000
int arr[Nmax];
std::string cout_result(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    int count = arr[0];
    if(sum - arr[0] == 0) return "YES";
    int i;
    for(i = 1 ; i <= n ; i++){
        if(sum - count - arr[i] == count || sum - arr[i] == 0){
            return "YES";
        }
        count += arr[i];
    }
    return "NO";

}

int main(){
    int q;
    std::cin >> q;
    int n;
    while(q--){
        std::cin >> n;
        std::cout << cout_result(n) << std::endl;
    }
    return 0;
}