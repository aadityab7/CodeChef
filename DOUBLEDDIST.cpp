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

		long arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		string ans = "Yes";

		long prev = arr[1] - arr[0];

		for(int i = 2; i < n; i++){
			long diff = arr[i] - arr[i - 1];
			if((diff == (2 * prev)) || (prev == (2 * diff))){
				prev = diff;
			}
			else{
				ans = "No";
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}