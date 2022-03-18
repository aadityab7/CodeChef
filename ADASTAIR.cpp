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
		int n, k;
		cin >> n >> k;

		int arr[n + 1];
		arr[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> arr[i];
		}

		int ans = 0;
		for(int i = 1; i <= n; i++){
			int num = arr[i] - arr[i - 1];
			if(num > k){
				ans += num / k;
				
				if(num % k == 0) ans--;
			}
		}

		cout << ans;
		cout << endl;
	}
	return 0;
}