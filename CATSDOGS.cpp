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
		long c, d, l;
		cin >> c >> d >> l;

		long long mx = (c + d) * 4;
		long long mn = d * 4;
		long num = (c - 2 * d) * 4;
		if(num > 0){
			mn += num;
		}

		if(l >= mn && l <= mx && l % 4 == 0){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
 		}
	}
	return 0;
}