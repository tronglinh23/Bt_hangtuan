// Khởi tạo mảng một chiều. Hãy viết một chương trình thử dùng các cách khai báo và khởi tạo mảng dưới đây.
// Với mỗi cách, nếu không có lỗi thì dùng vòng lặp in toàn bộ nội dung của mảng ra màn hình để xem kết quả khởi tạo, nếu có lỗi thì chuyển khai báo đó thành dạng comment
// Khai báo mảng trong và ngoài hàm main() và không khởi tạo giá trị cho mảng
// Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[N] = {1, 2, 3, 4} với N lớn hơn và nhỏ hơn 4.
// Khai báo và khởi tạo trong và ngoài hàm main() dạng int a[ ] = {1, 2, 3, 4}.
// Hãy chạy đi chạy lại trường hợp khai báo bên trong hàm main() và không khởi tạo để quan sát hiện tượng mỗi lần chạy lại in ra một kết quả khác cho nội dung mảng. Rút kinh nghiệm tránh lỗi không khởi tạo giá trị cho biến.



// #include <iostream>
// #define Nmax 5


// int main(){
//     int arr[Nmax] = {1,2,3,4};
//     for(int i = 0 ; i < Nmax; i++){
//         if(arr[i] != 0) std:: cout << arr[i] << " ";
//         else std::cout << "Error" << " ";
//     }
//     return 0;
// }

// Neu de arr[] ngoai main thi gia tri thi arr[ se dc mac dinh gan la 0], con trong ham main thi se k dc gan gia tri va lay bua gia tri
// Nếu N > 4 , arr nằm ngoài thì gtri thừa sẽ đc gán bằng 0, còn bên trong dẫn đến k chỉ một vị trí nào . Nếu N < 4 , dẫn đến tràn mảng => báo lỗi
// K lỗi tự định dạng sô lượng phần tử
// Mỗi lần chạy nó sẽ tự gán một giá trị rác nếu k khai báo dẫn đến lỗi ctrinh



// Bài 5A
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include <math.h>
#define Nmax 30

void BubbleSort(int* arr){
    for(int i = Nmax - 1 ; i >= 1 ; i--){
        for(int j = 0 ; j < i; j++){
            if(arr[j] > arr[j+1]){
                int m = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = m;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int arr[Nmax];
    for(int i = 0 ; i < Nmax; i++){
        int rand_num = rand();
        arr[i] = rand_num;
    }
    BubbleSort(arr);
    for(int i = 0 ; i < Nmax; i++) std::cout << arr[i] << " ";
    return 0;
}

