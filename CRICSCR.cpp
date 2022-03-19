#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int w[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		cin >> w[i];
	}

	int f = 1;
	for(int i = 0; i < n - 1; i++){
		if(arr[i + 1] < arr[i]){
			f = 0;
			break;
		}

		if(w[i + 1] < w[i] || w[i] >= 10){
			f = 0;
			break;
		}
	}

	if(f){
		cout << "YES" << endl;
	}
	else{ 
		cout << "NO" << endl;
	}

	return 0;
}