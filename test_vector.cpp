#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){

	int N;
	int name;
	string s;
	char ss;
	cin >> N;
	vector<pair<int,string>> v;
	for(int i=0;i<N;i++){
		cin >> name >> s;
		v.push_back(make_pair(name,s));
	}
	sort(v.begin(),v.end());
	// for(int i=0; i<N;i++){
	for(auto i : v){	
		cout << i.second;
	}

	return 0;
}       