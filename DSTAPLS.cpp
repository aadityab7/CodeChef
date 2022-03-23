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
		long long n, k ;
		cin >> n >> k;
		long long num = n / k;
		if(num % k == 0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}