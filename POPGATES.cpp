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
		int n, k;
		cin >> n >> k;

		int arr[n];
		char c;
		for(int i = 0; i < n; i++){
			cin >> c;
			if(c == 'H'){
				arr[i] = 1;
			}
			else{
				arr[i] = 0;
			}
		}

		int ch = 1;
		int count = 0;
		int f = 1;
		for(int i = n - 1; i >= n - k; i--){
		    if(arr[i] == f){
		        count ++;
		        if(f == 1) f = 0;
		        else f = 1;
		    }
		}
		
		if(count % 2 != 0){
			ch = 0;
		}

		int ans = 0;
		for(int i = 0; i < n - k; i++){
			if(arr[i] == ch){
				ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}