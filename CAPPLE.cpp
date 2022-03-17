#include<iostream>
#include <bits/stdc++.h>;
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
		for(int i = 0; i< n ; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int i = 0;
		int ans = 0;
		while(i < n){
			ans++;
			while(i < n && arr[i] == arr[i + 1]){
				i++;
			}
			i++;
		}

		cout << ans << endl;
	}
	return 0;
}