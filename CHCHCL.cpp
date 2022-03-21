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
		long n, m;
		cin >> n >> m;

		if(n % 2 != 0 && m % 2 != 0){
			cout << "No" << endl;
		}
		else{
			cout << "Yes" << endl;
		}
	}
	return 0;
}