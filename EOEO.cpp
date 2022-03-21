#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;

		long long ans = 0;
		while(n % 2 == 0){
			n = n / 2;
		}

		ans = n / 2;

		// long long ans = 0;
		// if(n % 2 != 0){
		// 	ans = n / 2;
		// }
		// else{
		// 	//if num can be represented as 2 ^ x : 0
		// 	if(n > 4){
		// 		//convert n into binary :
		// 		long long num = 0, total = 0;
		// 		int f = 1;
		// 		while(n != 0){
		// 			if(f && n % 2 == 0){
		// 				num++;
		// 			}
		// 			else{
		// 				f = 0;
		// 			}
		// 			total++;
		// 			n /= 2;
		// 		}
                
		// 		ans = total - num - 1;
		// 	}
		// }

		cout << ans << endl;
	}
	return 0;
}