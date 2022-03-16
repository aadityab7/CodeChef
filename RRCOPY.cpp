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
		for(int i = 0; i < n; i++)
			cin >> arr[i];

		//sort and find distinct elements;

		sort(arr, arr + n);


		int ans = 1;

		for(int i = 1; i < n; i++){
			if(arr[i] != arr[i - 1]) ans++;
		}

		cout << ans << endl;
	}
	return 0;
}