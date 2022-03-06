#include <iostream>
char arr[100][100];

char numtochar(int n){
	return (char)(n + 48);
}

int main(){
    int N, M;
    std::cin >> N >> M;
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M; j++){
            std::cin >> arr[i][j];
        }
    }
    
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M; j++){
            if(arr[i][j] != '*'){
                int sum = 0;
                if(arr[i-1][j] == '*') sum += 1; 
                if(arr[i-1][j-1] == '*') sum += 1; 
                if(arr[i-1][j+1] == '*') sum += 1; 
                if(arr[i][j-1] == '*') sum += 1; 
                if(arr[i][j+1] == '*') sum += 1; 
                if(arr[i+1][j] == '*') sum += 1; 
                if(arr[i+1][j-1] == '*') sum += 1; 
                if(arr[i+1][j+1] == '*') sum += 1;
                arr[i][j] = numtochar(sum); 
            }
            else continue;
        }
    }
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M; j++){
            std:: cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

