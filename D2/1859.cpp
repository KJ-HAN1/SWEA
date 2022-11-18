/*
SWEA D2-1859 백만장자 프로젝트
*/
#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int test=1;test<=T;test++){
        int n; // 예측일
        cin >> n;
        int *sale = new int[n];

        for(int i=0; i<n; i++){
            cin >> sale[i];
        }

        int cnt=0;
        int money=0;

        for(int i=0; i<n; i++){
            if(sale[i] <= sale[i+1]){
                cnt++;
                money += -1*sale[i];
            }else {
                money += cnt*sale[i];
                cnt = 0;
            }
        }
        cout <<"#" << test << " " <<money << endl;
    }
    return 0;
}