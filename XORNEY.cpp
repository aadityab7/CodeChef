#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long t;
	cin >> t;
	while(t--){
		
		long long l, r;
		cin >> l >> r;

		long long diff = r - l + 1;
		long long odds = diff / 2;

		if(diff % 2 != 0 && l % 2 != 0){
				odds++;
		}
		

		if(odds % 2 != 0){
			cout << "Odd" << endl;
		}
		else{
			cout << "Even" << endl;
		}
	}
	return 0;
}