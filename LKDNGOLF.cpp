#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, x, k;
		cin >> n >> x >> k;

		int f = 0;
		if(x % k == 0){
			f = 1;
		}else{
			if((n + 1 - x) % k == 0){
				f = 1;
			}
		}

		if(f == 1){
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}

	}
	return 0;
}
