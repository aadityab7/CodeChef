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

		int a, b;
		cin >> a >> b;

		int diff = b - a;
		if(diff < 0) diff = 0 - diff;

		int ans = 0;

		if(diff <= 2 && diff > 0){
				if(diff == 2){
					ans = 1;
				}
				else{
					if(a == 1 || b == 1 || a == n || b == n){
						ans = 1;
					}
					else{
						ans = 2;
					}
				}
		}
		
		cout << ans << endl;
	}
	return 0;
}