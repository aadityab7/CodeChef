#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		string ans = "NO";
		if(n != 1 && n != 3 && n != 5){
			ans = "YES";
		}

		cout << ans << "\n";
	}
	return 0;
}