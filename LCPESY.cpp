#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;

		std::vector<int> aa, aA, ba, bA;
		aa.assign(26,0);
		aA.assign(26,0);
		ba.assign(26,0);
		bA.assign(26,0);
		

		for(int i = 0; i < a.size(); i++){
			if(a[i] >= 'a' && a[i] <= 'z'){
				aa[a[i] - 97]++;
			}
			else{
				aA[a[i] - 65]++;
			}
		}

		for(int i = 0; i < b.size(); i++){
			if(b[i] >= 'a' && b[i] <= 'z'){
				ba[b[i] - 97]++;
			}
			else{
				bA[b[i] - 65]++;
			}
		}

		int ans = 0;
		for(int i = 0; i < 26; i++){
			if(aa[i] < ba[i]){
				ans += aa[i];
			}
			else{
				ans += ba[i];
			}

			if(aA[i] < bA[i]){
				ans += aA[i];
			}
			else{
				ans += bA[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}