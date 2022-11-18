/*
SWEA D1-2071 평균값 출력
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int N;
    cin >> N;
    double num[10];
    double sum[1000];

    for(int i=0;i<N;i++){
        sum[i]=0;
        for(int j=0; j<10;j++){
            cin >> num[j];
            sum[i] += num[j];
        }
    }
    for(int i =0; i<N; i++){
        cout << "#" << i+1 << " " << round(sum[i]/10) << endl;
    }

    return 0;
}