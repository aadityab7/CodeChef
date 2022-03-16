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
		long c1 = 0, c2 = 0;

		long arr[n];
		for(long i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] == 2) c1++;
			else if(arr[i] == 0) c2++;
		}

		long ans = 0;
		if (c1 > 0)
		ans += c1 * (c1 - 1) / 2;
		if(c2 > 0)
		ans += c2 * (c2 - 1) / 2;

		cout << ans << endl;
	}
	return 0;
}