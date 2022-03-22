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
		long long s;
		cin >> s;

		long long total = (n * (n + 1)) / 2;
		
		long long num = total - s;
		
		if(num > 0 && num <= n){
			cout << num << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}