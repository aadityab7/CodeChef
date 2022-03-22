#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long n, k;
	cin >> n >> k;
	long arr[n];
	for(long i = 0; i< n; i++){
		cin >> arr[i];
	}

	std::vector<long> fliped;
	int ans = 0;
	for(long i = 0; i < n; i++){
		if(arr[i] < 0){
			arr[i] = -arr[i];
			ans++;
			if(i < n - 1){
				arr[i + 1] = -arr[i + 1];
			}
			fliped.push_back(i+1);
		}
	}

	cout << ans << endl;

	for(long i = 0; i < fliped.size(); i++){
		cout << fliped[i] << ' ';
	}
	cout << endl;

	return 0;
}