/*
SWEA D1-2072 홀수만 더하기
*/

#include<iostream>

using namespace std;

int main(){

    int T;
    cin >> T;
    int arr[10];
    int sum[10000];

    for(int i = 0; i<T; i++){
        sum[i] = 0;

        for(int j=0; j<10;j++){
            cin >> arr[j];
            if(arr[j]%2 != 0){
                sum[i]+=arr[j];
            }   
        }
    }
    for(int i=0; i<T; i++){
        cout << "#" << i+1 << " " << sum[i] << endl;
    }
    return 0;
}
