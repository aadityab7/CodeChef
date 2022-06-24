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

		long long x;
		cin >> x;


		long long num;
		string ans = "YES";
		long long max = 0;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num > max){
				max = num;
			}

			if(num < max){
				if((max + num) > x){
					ans = "NO";
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}