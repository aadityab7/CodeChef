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

		string s;
		cin >> s;

		char a[n / 2], b[n / 2];

		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				a[i / 2] = s[i];
			}
			else{
				b[i / 2] = s[i];
			}
		}

		sort(a, a + (n / 2));
		sort(b, b + (n / 2));

		string ans = "YES";

		for(int i = 0; i < (n / 2); i++){
			if(a[i] != b[i]){
				ans = "NO";
				break;
			}
		}

		cout << ans << "\n";



		
	}
	return 0;
}