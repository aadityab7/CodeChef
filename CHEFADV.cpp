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
		long n, m, x, y;
		cin >> n >> m >> x >> y;

		n--;
		m--;
		
		// int n_done = 0;

		// if(n == 0){
		// 	n_done = 1;
		// }
		// else if(n >= x){
		// 	if(n % x == 0){
		// 		n_done = 1;
		// 	}
		// 	else if(n - 1 % x == 0){
		// 		n_done = 1;
		// 	}
		// }

		// int m_done = 0;

		// if(m == 0){
		// 	m_done = 1;
		// }
		// else if(m >= y){
		// 	if(m % y == 0){
		// 		m_done = 1;
		// 	}
		// 	else if(m - 1 % y == 0){
		// 		m_done = 1;
		// 	}
		// }

		long N_remaining = n % x;
		long M_remaining = m % y;

		string ans = "Pofik";

		if(N_remaining == 0 || N_remaining == 1 && M_remaining == 0 || M_remaining == 1){
			ans = "Chefirnemo";
		}

		// if(N_remaining == 0 && M_remaining == 0){
		// 	ans = "Chefirnemo";
		// }
		// else if(N_remaining == 1 && M_remaining == 1){
		// 	ans = "Chefirnemo";
		// }

		cout << ans << "\n";

	}
	return 0;
}