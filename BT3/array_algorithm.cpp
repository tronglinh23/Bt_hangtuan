#include <iostream>

int main(){
    int N, M;
    int arr[N][M];
    std::cin >> N >> M;
    int locate = 0;
    int k = 1;
    int cot = M, dong = N;
    while(k <= dong*cot){
        for(int i = locate ; i < M; i++) arr[locate][i] = k++;
        for(int j = locate + 1 ; j < N; j++) arr[j][M-1] = k++;
        if(locate != M - 1){  // Neu locate = M - 1 thi se cong them 1 lan nua 
            for(int z = M - 2 ; z >= locate; z--) arr[N-1][z] = k++;
        }
        if(locate != N -1){ 
            for(int q = N - 2 ; q > locate; q--) arr[q][locate] = k++;
        }
        M--;N--;
        locate++;

    }
    for(int i = 0 ; i < dong ; i++){
        for(int j = 0 ; j < cot; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}