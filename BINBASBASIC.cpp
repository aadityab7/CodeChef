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
		int n;
		cin >> n;

		int k;
		cin >> k;

		string s;
		cin >> s;

		int unmatched = 0;

		for(int i = 0; i < n / 2; i++){
			if(s[i] != s[n - i - 1]){
				unmatched++;
			}
		}

		string ans = "NO";

		if(unmatched == k){
			ans = "YES";
		}
		else if(k > unmatched){
			if(((k - unmatched) % 2) == 0){
				ans = "YES";
			}
			else if(n % 2 != 0){
				ans = "YES";
			}
		}


		cout << ans << "\n";
	}
	return 0;
}