#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		long n, d;
		cin >> n >> d;

		long ans;

		if(d < 10){
			if(n > pow(2, d))
				ans = pow(2, d);
			else
				ans = n;
		}
		else{
			if(n > 1024 * pow(3, (d - 10)))
				ans = 1024 * pow(3, (d - 10));
			else
				ans = n;
		}

		cout << ans << endl;
	}
	return 0;
}