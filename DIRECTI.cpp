#include<iostream>
#include <bits/stdc++.h>
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

		string arr[n];

		string str;

		for(int i = 0; i < n; i++){
			str = "";
			while(str == ""){
				getline(cin, str);
			}

			arr[i] = str;
		}

		/*
		for(int i = 0; i < n; i++){
			cout << arr[i] << endl;
		}
		*/

		int len;
		string add, curr_str;
		string prev = "Begin on ";

		for(int i = n - 1; i >= 0; i--) {
			curr_str = arr[i];
			len = curr_str.size();

			if(curr_str[0] == 'L'){
				add = curr_str.substr(8, len);
			}
			else{
				add = curr_str.substr(9, len);
			}

			cout << prev + add << endl;

			if(curr_str[0] == 'L'){
				prev = "Right on ";
			}
			else{
				prev = "Left on ";
			}
		}

	}
	return 0;
}