#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
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

		int cmax;
		cin >> cmax;

		int ans = 1;

		int num;
		for(int i = 1; i < n; i++){
			cin >> num;
			if(num <= cmax){
				ans++;
				cmax = num;
			}
			
		}

		cout << ans <<  endl;
	}
	return 0;
}