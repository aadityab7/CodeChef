#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long long t;
	cin >> t;
	while(t--){
		long long l, r;
		cin >> l >> r;

		long long num;
		if(l % 2 == 0 && r % 2 == 0) num = (r - l) / 2;
		else num = ((r - l) / 2) + 1;
	
		if(num % 2 == 0){
			cout << "Even" << endl;
		}
		else{
			cout << "Odd" << endl;
		}
	}
	return 0;
}