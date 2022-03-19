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

		int ans[n] = {};
		string arr[n] = {};
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int l;
		string s;
		for(int i = 0; i < k; i++){
			cin >> l;
			while(l--){
				cin >> s;
				for(int j = 0; j < n; j++){
					if(arr[j] == s){
						ans[j] = 1;
					}
				}
			}
		}

		for(int i = 0; i < n; i++){
			if(ans[i] == 1){
				cout << "YES" << ' ';
			}
			else{
				cout << "NO" << ' ';
			}
		}

		cout << endl;

	}
	return 0;
}