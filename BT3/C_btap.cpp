//1.Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N, xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
// #include <iostream>
// #define Nmax 1000
// int main(){
//     int N;
//     std::cin >> N;
//     int arr[Nmax];
//     for(int i = 0 ; i < N;i++) std::cin >> arr[i];
//     for(int i = 0 ; i < N - 1 ; i++){
//         for(int j = i + 1 ; j < N ; j++){
//             if(arr[i] == arr[j]){
//                 std::cout << "YES";
//                 return 0;
//             }
//         }
//     }
//     std::cout << "NO";
//     return 0;
// }


// 2.	Xâu đối xứng. Viết chương trình nhập từ bàn phím một xâu kí tự độ dài tối đa 100, sau đó kiểm tra xem xâu kí tự đó có đối xứng hay không. Chẳng hạn “abcba", “abba" là đối xứng, còn “abcda” không đối xứng. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
//Gợi ý (bôi đen để xem): cho 

#include <iostream>
#include <string>
#include <algorithm>
int main(){
    std::string a;
    std::getline(std::cin,a);
    std::string save_v = a;
    reverse(a.begin(),a.end());
    int length = a.length();
    int i = 0;
    while(i != length){
        if(a[i] != save_v[i]){
            std::cout << "NO";
            return 1;
        }
        i++;
    }
    std::cout <<"YES";
    return 0;
}