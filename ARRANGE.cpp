#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;

		string s;
		cin >> s;

		//n = 2^k
		long n = pow(2, k);

		//represent the indexes as binary string and then reverse it and then put them in respective place 

		string ans = s;

		for(int i = 1; i < n - 1; i++){
			//convert i into binary string 
			//reverse that string 
			//convert it back to number
			//store s[i] at new location
		}

		cout << ans << "\n";

	}
	return 0;
}