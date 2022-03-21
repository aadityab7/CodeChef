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
		long long n, a, b, k;
		cin >> n >> a >> b >> k;

		long x = n / a;
		long y = n / b;
		long z;
    	long long ans = x + y;
		
		if(b % a == 0){
			z = n / b;
		}
		else if(a % b == 0){
		    z = n / b;
		}
		else{
		    z = n / (a * b);
		}
		
		ans = ans - 2 * z;
		
		if(ans >= k){
			cout << "Win" << endl;
		}
		else{
			cout << "Lose" << endl;
		}
	}
	return 0;
}