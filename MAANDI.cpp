#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int check_for_lucky(int num){
	int is_lucky = 0;

	string curr_str = to_string(num);
	for(int j = 0; j < curr_str.size(); j++){
		if(curr_str[j] == '4' || curr_str[j] == '7'){
			is_lucky = 1;
			break;
		}
	}

	return is_lucky;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;

		string curr_str;
		long long ans = 0;

		for(long i = 1; i * i <= n; i++){
			if(n % i == 0){
				//if the current number is a divisor
				//check if divisor has number 4 or 7 in it
				// curr_str = to_string(i);
				// for(int j = 0; j < curr_str.size(); j++){
				// 	if(curr_str[j] == '4' || curr_str[j] == '7'){
				// 		ans++;
				// 		break;
				// 	}
				// }

				ans += check_for_lucky(i);

				//then n / i is also a divisor
				if(i * i != n){
					//CHECK FOR 4 AND 7
					ans += check_for_lucky(n / i);

					// curr_str = to_string(n / i);
					// for(int j = 0; j < curr_str.size(); j++){
					// 	if(curr_str[j] == '4' || curr_str[j] == '7'){
					// 		ans++;
					// 		break;
					// 	}
					// }
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}