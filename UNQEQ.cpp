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

		string ans = "YES";

		if(n % 2 != 0){
			ans = "NO";
		}
		else if((n / 2) % 2 != 0){
			ans = "NO";
		}

		cout << ans << endl;


		if(ans == "YES"){
			int i;

			// while(i < n / 2){
			// 	cout << odd << ' ';
			// 	odd += 2; 
			// 	i++;
			// }

			// while(i < n){
			// 	cout << even << ' ';
			// 	even += 2;
			// 	i++;
			// }

			i = 1;

			while(i <= n/4){
				cout << (2 * i) - 1 << ' ';
				i++;
			}

			while(i <= n/2){
				cout << 2 * i << ' ';
				i++;
			}

			cout << endl;

			i = 1;

			while(i <= n/4){
				cout << (2 * i) << ' ';
				i++;
			}

			while(i <= n/2){
				cout << (2 * i) - 1 << ' ';
				i++;
			}

			cout << endl;
		}
	}
	
	return 0;
}