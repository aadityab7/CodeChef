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
		int a, b, c, d, n;
		cin >> a >> b >> c >> d >> n;

		int x = abs(c - a);
		int y = abs(d - b);

		int num = x + y;

		string ans = "NO";
		if(num == n){
			ans = "YES";
		}
		else{
			if(n > num){
				if(abs(n - num) % 2 == 0){
					ans = "YES";
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}