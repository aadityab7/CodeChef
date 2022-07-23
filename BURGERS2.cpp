#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		int x, y;
		long n;
		long long r;

		cin >> x >> y >> n >> r;
		
		if((r / x) < n){
			cout << -1 << "\n";
		}
		else{
			long long premium_burgers = (r - (n * x)) / (y - x);

			if(premium_burgers > n){
				premium_burgers = n;
			}

			cout << n - premium_burgers << ' ' << premium_burgers << "\n"; 
		}
		

		// //long count = 0;
		// long pre = r / y;

		// if((r / x) < n){
		// 	cout << -1 << "\n";
		// }
		// else if(pre >= n){
		// 	cout << n - pre << ' ' << pre << "\n";
		// }
		// else{
		// 	//current money spent = n * x;
		// 	//if we buy a premium burger it will be (n - count) * x + count * y <= r

		// 	// 			while((count <= n) && (((x * (n - count)) + (y * count)) <= r)){
		// 	// 				count++;
		// 	// 			}
            

  //       	long long cost_pre = y * pre;
  //       	long long cost_nor = x * (n - pre);

  //           while(pre >= 0 && ((cost_nor + cost_pre) > r)){
		// 		pre--;
		// 		cost_nor += x;
		// 		cost_pre -= y;
		// 	}
        
		// 	cout << n - pre << ' ' << pre << "\n";

		// 	//cout << n - (count - 1) << ' ' << count - 1 << "\n";
		// }	
	}
	return 0;
}