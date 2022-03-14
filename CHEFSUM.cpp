#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
#define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long mn = LONG_MAX;

		int arr[n];
		long total = 0;
		long ans;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			total += arr[i];
		}

		long sum = 0;
		long curr = 0;

		int i = 0;
		while(i < n){
			curr = total + arr[i] + sum;
			total -= arr[i];
			sum += arr[i];
			i++;

			if(curr < mn){
			    mn = curr;
				ans = i;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
