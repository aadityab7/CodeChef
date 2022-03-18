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
		int n, b, m;
		cin >> n >> b >> m;

		int curr = -1;
		int x;
		int ans = 0;
		for(int i = 0; i < m; i++){
			cin >> x;

			if(curr != x / b){
				ans++;
				curr = x / b;
			}
		}

		cout << ans;
		cout << endl;
	}
	return 0;
}