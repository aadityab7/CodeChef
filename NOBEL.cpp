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
		int n, m ;
		cin >> n >> m;

		int arr[m] = {};
		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num - 1] = 1;
		}

		string ans = "NO" ;
		for(int i = 0; i < m; i++){
			if(arr[i] == 0){
				ans = "YES";
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}