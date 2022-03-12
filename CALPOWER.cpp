#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int arr[26] = {};

		for(int i = 0; i < s.size(); i++){
			arr[s[i] - 97]++;
		}

		int i = 1;
		int total = 0;
		for(int j = 0; j < 26; j++){
			while(arr[j] != 0){
				total += i * (j + 1);
				arr[j]--;
				i++;
			}
		}

		cout << total << endl;

	}
	return 0;
}
