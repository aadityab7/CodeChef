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
		int n, m;
		cin >> n >> m;

		int arr[1000000] = {};
		int ans = 0;
		int num;
		for(int i = 0; i < n; i++){	
			cin >> num;
			arr[num - 1] = 1;
		}

		for(int i = 0; i < m; i++){
			cin >> num;
			if(arr[num - 1] == 1) ans++;
		} 

		cout << ans << endl;
	}
	return 0;
}