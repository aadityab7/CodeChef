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
		int n, x, k;
		cin >> n >> x >> k;

		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i  =0; i< n;i++){
			cin >> b[i];
		}

		int count = 0;
		for(int j = 0; j < n; j++){
			int num = a[j] - b[j];
			if(num < 0) num = - num;

			if(num <= k) count ++;
		}

		if(count >= x) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
