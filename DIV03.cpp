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
		long arr[10];
		long long sum = 0;
		for(int i = 0; i < 10; i++){
			cin >> arr[i];
			sum += arr[i];
		}

		long k;
		cin >> k;

		long rem = k;

		int ans;
		for(int i = 9; i >= 0; i--){
			if(arr[i] - rem > 0){
				ans = i + 1;
				break;
			}
			else{
				rem -= arr[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}