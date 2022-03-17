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

		long x[n];
		long y[n];

		for(int i = 0; i < n; i++){
			cin >> x[i];
			cin >> y[i];
		}

		sort(x, x + n);
		sort(y, y + n);

		int i = 0;
		int ans = 0;
		while(i < n){
			ans++;
			while(i < n - 1 && x[i] == x[i + 1]){
				i++;
			}
			i++;
		}

		i = 0;
		while(i < n){
			ans++;
			while(i < n - 1 && y[i] == y[i + 1]){
				i++;
			}
			i++;
		}

		cout << ans << endl;
	}
	return 0;
}