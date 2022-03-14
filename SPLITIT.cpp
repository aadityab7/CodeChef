#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
#include <vector>
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

		std::vector<int> arr;
		arr.assign(26,0);

		for(int i = 0; i < n - 1; i++){
			arr[s[i] - 97]++;
		}

		if(arr[ s[ n - 1 ]  - 97] != 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
