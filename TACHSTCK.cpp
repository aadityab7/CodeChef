#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	
	long long n, d;
	cin >> n >> d;

	long long arr[n];
	for(long i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);

	long i = 0;
	long long ans = 0;
	while(i < n){
		if(arr[i + 1] - arr[i] <= d){
			ans++;
			i = i + 2;
		}
		else{
			i++;
		}
	}

	cout << ans << endl;
	return 0;
}