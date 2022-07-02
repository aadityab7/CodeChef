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
		int l , k;
		cin >> l >> k;

		int arr[n];
		int max = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] > max){
				max = arr[i];
			}
		}

		int curr = arr[n - 1];

		string ans = "No";
		
		if(curr > max){
			ans = "Yes";
		}
		else if(curr + ((l - 1) * k) > max){
			ans = "Yes";
		}
		else if(curr == max){
			ans = "Yes";
			for(int i = 0; i < n - 1; i++){
				if(arr[i] == max){
					ans = "No";
					break;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}