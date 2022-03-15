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
		int n, x;
		cin >> n >> x;

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int ans = -1;
		int sum = 0;

		for(int i = n - 1; i >= 0; i--){
			sum += arr[i];
			if(sum >= x){
				ans = n - i;
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}