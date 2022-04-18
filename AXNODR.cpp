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
		long long n;
		cin >> n;

		long long numb = n / 2;

		long long ans = n + 3;
		if(numb % 2 != 0){
			ans = 3;
		}
		else if(n % 2 != 0){
			ans -= 3;
		}
		

		cout << ans << endl;
	}
	return 0;
}