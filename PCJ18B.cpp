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

		long ans = 0;

		long odd = 1;
		long numb;

		while(n >= odd){
			numb = (n - odd) + 1;
			ans += (numb * numb);
			odd += 2;
		}

		cout << ans << endl;
	}
	return 0;
}