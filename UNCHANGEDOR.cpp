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
		long n;
		cin >> n;

		long ans = n - 1;

		long count = -1;

		while(n != 0){
			n = n / 2;
			count++;
		}

		ans -= count;

		cout << ans << endl;
	}
	return 0;
}