#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
#include<cmath>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long arr[n * n][2];

		long num;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> num;
				arr[num - 1][0] = i;
				arr[num - 1][1] = j;
			}
		}

		long long ans = 0;

		for(long i = 1; i < n * n; i++){
			ans += abs(arr[i][0] - arr[i - 1][0]) + abs(arr[i][1] - arr[i - 1][1]);
		}

		cout << ans << endl;
	}
	return 0;
}