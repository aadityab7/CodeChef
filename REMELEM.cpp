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
		long n;
		cin >> n;

		long k;
		cin >> k;

		//long long arr[n];

		long min = LONG_MAX;
		long max = 0;
		long num;

		for(int i = 0; i < n; i++){
			cin >> num;

			if(num > max){
				max = num;
			}

			if(num < min){
				min = num;
			}
		}

		//sort(arr, arr + n);
        string ans;
        
		if(n == 1){
			ans = "YES";
		}
		else if(min + max <= k){
			ans = "YES";
		}
		else{
			ans = "NO";
		}

		cout << ans << endl;
	}
	return 0;
}