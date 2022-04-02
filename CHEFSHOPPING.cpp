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

		long l[n];
		long r[n];

		for(int i = 0; i < n; i++){
			cin >> l[i];
		}

		for(int i = 0; i < n; i++){
			cin >> r[i];
		}

		long long ans = 0;
		for(int i = 1; i < n; i++){
			if(r[i - 1] < l[i]){
				ans += r[i - 1];
			}
			else{
				ans += l[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}