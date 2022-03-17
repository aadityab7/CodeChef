#include<iostream>
#include <bits/stdc++.h>
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);

	long long total = 0;
	for(int i = 0; i < n - 1; i++){
		total += arr[i + 1] * arr[i];
	}

	cout << total << endl;

	return 0;
}