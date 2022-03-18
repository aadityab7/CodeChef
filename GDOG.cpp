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
		int n, k;
		cin >> n >> k;

		int ans = 0;
		for(int i = 1; i <= k; i++){
			if(n % i > ans)
				ans = n % i; 
		}

		cout << ans << endl;
	}
	return 0;
}