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

		string a, b;

		cin >> a >> b;

		int arr[26] = {};

		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				arr[b[i] - 97] = 1;
			}
		}

		int ans = 0;

		for(int i = 0; i < 26; i++){
			if(arr[i] == 1){
				ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}