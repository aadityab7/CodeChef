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

		int arr[n];
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			if(s == "cookie"){
				arr[i] = 0;
			} 
			else{
				arr[i] = 1;
			}
		}

		int f = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == 0 && f){
				break;
			}

			if(arr[i] == 0){
				f = 1;
			}
			else{
				f = 0;
			}
		}

		if(f){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
