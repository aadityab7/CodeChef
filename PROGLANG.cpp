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
		int a, b;
		cin >> a >> b;

		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int ans = 0;

		if(a == x1 || a == y1){
			if(b == x1 || b == y1){
				ans = 1;
			}
		}

		if(a == x2 || a == y2){
			if(b == x2 || b == y2){
				ans = 2;
			}
		}

		cout << ans << endl;
	}
	return 0;
}