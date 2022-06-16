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
		int n;
		cin >> n;
		int x;
		cin >> x;

		char curr = 'a';
		
		int xi = x;

		string ans = "";

		// for(int i = 0; i <= n / 2; i++){
		// 	ans += curr;

		// 	if(xi > 1){
		// 		curr++;
		// 		xi--;
		// 	}
		// }

		// for(int i = n / 2; i < n; i++){
		// 	cout << curr;
		// 	if(x > 1){
		// 		curr--;
		// 		x--;
		// 	}
		// }
			
		// if(n % 2 == 0){
		// 	for(int i = 0; i < n / 2; i++){
		// 		ans += ans[i];
		// 	}
		// }
		// else{
		// 	for(int i = 0; i < n / 2 - 1; i++){
		// 		ans += ans[i];
		// 	}
		// }











		if(n % 2 == 0){
			if(x > n / 2){
				cout << -1;
			}
			else{
				for(int i = 0; i < n / 2; i++){
					ans += curr;
					if(xi > 1){
						xi--;
						curr++;
					}
				}

				for(int i = (n / 2) - 1; i >= 0; i--){
					ans += ans[i];
				}
				cout << ans;
			}
		}
		else{
			if(x > (n / 2) + 1){
				cout << -1;
			}
			else{
				for(int i = 0; i < (n / 2) + 1; i++){
					ans += curr;
					if(xi > 1){
						xi--;
						curr++;
					}
				}

				for(int i = (n / 2) - 1; i >= 0; i--){
					ans += ans[i];
				}
				cout << ans;
			}
		}
		
		cout << endl;
	}
	return 0;
}