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

		string s;
		cin >> s;


		for(int i = 0; i < n / 2; i++){
			if(s[i] > s[n - i - 1]){
				char temp = s[i];
				s[i] = s[n - 1 - i];
				s[n - 1 - i] = temp;
			}
		}

		string ans = "YES";
		char max = s[0];

		for(int i = 1; i < n; i++){
			if(s[i] < max){
				ans = "NO";
				break;
			}
			else{
				max = s[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}