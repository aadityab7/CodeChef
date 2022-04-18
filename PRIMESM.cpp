#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;

		int ans = 1;

		if(a == 1 || b == 1){
			ans = -1;
		}
		else{
			int t1 = 0, t2 = 0, th1 = 0, th2 = 0;
			if(a % 2 == 0){
				t1 = 1;
			}
			if(a % 3 == 0){
				th1 = 1;
			}
			if(b % 2 == 0){
				t2 = 1;
			}
			if(b % 3 == 0){
				th2 = 1;
			}
			if(t1 && t2){
				ans = 0;
			}
			else if(th1 && th2){
				ans = 0;
			}
		}

		cout << ans << endl;
	}
	return 0;
}