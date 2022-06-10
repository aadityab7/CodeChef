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

		int diff = b - a;

		string ans = "NO";
		
		if (diff % 3 == 0){
			ans = "YES";
		}
		else if ((diff - 1) % 3 == 0){
			ans = "YES";
		}

		cout << ans << endl;
	}
	return 0;
}