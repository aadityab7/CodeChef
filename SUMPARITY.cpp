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
		long long n;
		cin >> n;
		long long a;
		cin >> a;

		string ans = "Odd";

		if(a % 2 == 0){
			if(n == 1){
				if(a % 2 == 0){
					ans = "Even";
				}
			}	
			else{
				ans = "Impossible";				
			}
		}
		else{
			if(n % 2 == 0){
				ans = "Even";
			}
		}

		cout << ans << "\n";
	}
	return 0;
}