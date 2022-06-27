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
		long n;
		cin >> n;
        long p = n;

		// if(n > 250000){
		// 	if(n > 500000){
		// 		tax = (250000) * 0.05;

		// 		if(n > 750000){
		// 			tax += (250000) * 0.1;

		// 			if(n > 1000000){
		// 				tax += (250000) * 0.15;


		// 			}
		// 			else{
		// 				tax += (n - 750000) * 0.15;
		// 			}
		// 		}
		// 		else{
		// 			tax += (n - 500000) * 0.1;
		// 		}
		// 	}
		// 	else{
		// 		tax = (n - 250000) * 0.05;
		// 	}
		// }


		long long tax = 0;
		int base = 250000;
		float rate = 0.0;
		long long tax1;
		float limit = 0.3;

		while(n > 0 && rate < 0.35){
		    
			if(n > base){
				tax1 = base * rate; 
			}
			else{
				tax1 = n * rate;
			}
			
			if(rate == limit){
				tax1 = n * rate; 
			}

			tax += tax1;

			//cout <<  n << '*' << rate << '=' << tax1 << endl;

			n -= base;
			rate += 0.05;
		}

		long long ans = p - tax;

		cout << ans << endl;
	}
	return 0;
}