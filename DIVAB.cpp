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
		long long a, b;
		cin >> a >> b;

		long long n;
		cin >> n;


		if(a % b == 0){
			cout << -1 << "\n";
		}
		else{
			long long number = (n / a) * a;

			if(n % a != 0){
				number += a;
			}

			long long ans = -1;
			
			for(int i = 0; i < 1000; i++){
				if(number % b != 0){
					ans = number;
					break;
				}

				number += a;
			}

			cout << ans << "\n";

		}

	}
	return 0;
}