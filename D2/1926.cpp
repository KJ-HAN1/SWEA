#include<iostream>
#include<string>

using namespace std;

int main(){

    int N; //수 입력
    cin >> N;
    //1~ N 까지 나열 후 3,6,9 일때 - 출력
    for(int i=1; i<=N; i++){
        string s = to_string(i);
        bool check = false;
        int cnt =0;

        for(int j=0;j<s.size();j++){
            if(s[j] == '3' || s[j] == '6' || s[j] == '9'){
                cnt ++;
                check = true;
            }
        }

        if(check){
            for(int i=0; i<cnt; i++)
                cout << "-";
            cout <<" ";
        }else{
            cout << i << " ";
        }

    }


    return 0;
}