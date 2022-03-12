#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		std::vector<string> arr;
		string a = s.substr(0,2);
		arr.push_back(a);

		int flag;
		for(int i = 1; i < s.size() - 1; i++){
			a = s.substr(i, 2);
			flag = 1;

			for(int j = 0; j < arr.size() ; j++){
				if(a == arr[j]){
					flag = 0;
					break;
				}
			}

			if(flag){
				arr.push_back(a);
			}
		}

		cout << arr.size() << endl;
	}
	return 0;
}
