#include<iostream>
#include <bits/stdc++.h>
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

		long mn = LONG_MAX;
		for(int i = 0; i < n; i++){
			long diff = arr[i + 1] - arr[i];
			if(diff < mn) mn = diff;
		}

		cout << mn << endl;
	}
	return 0;
}
