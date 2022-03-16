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
		long n;
		cin >> n;

		long long num;
		long mx1 = 0;
		long mx2 = 0;

		long long prev;
		cin >> prev;
		
		long curr = 1;

		for(int i = 1; i < n; i++){
			cin >> num;
			if(num > prev){
				curr++;
			}
			else{
				if(curr > mx1){
					mx2 = mx1;
					mx1 = curr;
				}
				else if(curr > mx2){
					mx2 = curr;
				}

				curr = 1;
			}

			prev = num;
		}

		long long ans = mx1 + mx2;
		cout << ans << endl;
	}
	return 0;
}