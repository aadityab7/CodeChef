#include<iostream>
#include <bits/stdc++.h>;
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
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int ans;
		int i = 0;
		while(i < n - 1){
			while(arr[i + 1] - arr[i] == 1)
			    i++;
			int x = arr[i];
			int y = arr[i + 1];
			ans = y;
			if(i < n - 2){
				if((arr[i + 2] - x) != 1){
					ans = x;
				}
			}
			break;
		}

		cout << ans << endl;
	}
	return 0;
}