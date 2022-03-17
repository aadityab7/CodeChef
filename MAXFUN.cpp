#include<iostream>
#include <bits/stdc++.h>;
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

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int mid = n / 2;

		long x = arr[0];
		long y = arr[mid];
		long z = arr[n - 1];

		long long ans = abs(x - y) + abs(y - z) + abs(z - x);

		if(n % 2 == 0){
			mid = (n / 2)- 1;
		}

	    y = arr[mid];

		long long ans2 = abs(x - y) + abs(y - z) + abs(z - x);

		if(ans> ans2){
			cout << ans<< endl;
		}
		else{
			cout << ans2 << endl;
		}
	}
	return 0;
}