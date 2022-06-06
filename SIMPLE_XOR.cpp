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
		long long l, r;
		cin >> l >> r;

		if((r - l == 3) && (l % 2 != 0)){
			cout << -1 << endl;
		}
		else{
			if(l % 2 == 0){
				cout << l << ' ' << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
			}
			else{
				cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << ' ' << l + 4 << endl;
			}
		}


	}
	return 0;
}