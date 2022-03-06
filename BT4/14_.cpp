#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(n) for(int i = 0 ; i < n ; i++)

int main(){
    int n;
    cin >> n;
    int arr[n], brr[n+1];
    FOR(n) cin >> arr[i];
    FOR(n+1) cin >> brr[i];
    sort(arr,arr+n);
    sort(brr,brr+n+1);
    FOR(n){
        if(arr[i] != brr[i]){
            cout << brr[i];
            return 0;
        }
    }
    cout << brr[n];
    return 0;
}