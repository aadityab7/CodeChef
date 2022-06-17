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

		long arr[n];
		long ones = 0, twos = 0;

		long long ans = 0;

		for(long i = 0; i < n; i++){
			//count ones
			//count twos
			cin >> arr[i];

			if(arr[i] == 1){
				ans += n - i - 1;
				ans += i - ones;
				ones++;
			}
			else if(arr[i] == 2){
				twos++;
			}
			
		}

		ans += (twos * (twos - 1)) / 2;

		cout << ans << endl;
	}
	return 0;
}