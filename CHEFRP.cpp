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
		long total = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			total += arr[i];
		}

		sort(arr, arr + n);

		if(arr[0] >= 2){
			cout << total - arr[0] + 2 << endl;
		}
		else{
			cout << -1 << endl;
		}

	}
	return 0;
}