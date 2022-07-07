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
		long a, b, c, d;
		cin >> a >> b >> c >> d;

		string ans = "NO";
		
		long dist = a - b;
		if(dist < 0) dist = 0 - dist;

		long diff = c - d;
		if(diff < 0) diff = 0 - diff;

		if(diff == 0){
			if(a == b){
				ans = "YES";
			}
		}
		else if(dist % diff == 0){
			ans = "YES";
		}

		cout << ans << endl;

	}
	return 0;
}