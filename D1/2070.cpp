/*
SWEA D1-2070 두수 크기 비교
*/
#include<iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    if(a > b){
        cout << ">" << endl;
    }else if(a == b){
        cout << "=" << endl;
    }else cout << "<" << endl;

    return 0;
}