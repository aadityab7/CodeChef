#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		int f = 0, flag = 0;
		int i = 0;
		while(i < s.size() - 3){
			string sub = s.substr(i, 4);
			if(sub == "code"){
				f = 1;
				i = i + 4;
			}
			else if(sub == "chef"){
				if(f == 0){
					flag = 1;
					break;
				}
				else{
					i = i + 4;
				}
			}
			else{
				i++;
			}
		}

		if(flag == 0){
			cout << "AC" << endl;
		}
		else{
			cout << "WA" << endl;
		}
	}
	return 0;
}