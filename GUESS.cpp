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
		long m, n;
		cin >> n >> m;

		long long mul = n * m;
		
		//cout << mul << endl;

		if(mul % 2 == 0){
			cout << "1/2" << endl;  
		}
		else{
			cout << (mul / 2) << "/" << (mul) << endl;
		}
	}
	return 0;
}