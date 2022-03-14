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
		long s, n;
		cin >> s >> n;

		long ans = 0;
		while(n > 0 && s >= 2){
			ans += s / n;
			s = s % n;
			n = s - (s % 2);
		}

		ans += s;

		cout << ans << endl;
	}
	return 0;
}
