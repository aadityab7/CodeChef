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
		int ans = 0;

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int start, f = 0;

		for(int i = 0; i < n; i++){
			if(i > 4) start = i - 5;
			else start = 0;

			f = 0;
			for(int j = start; j < i; j++){
				if(arr[j] <= arr[i]){
					f = 1;
					break;
				}
			}

			if(f == 0){
				ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}