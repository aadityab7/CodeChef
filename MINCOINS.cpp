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

		int ans = -1;
		if(n % 10 == 0 || n % 5 == 0){
			ans = n / 10;
			n = n % 10;
			ans += n / 5;
		}
		
		cout << ans << endl;
	}
	return 0;
}