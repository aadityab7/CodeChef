#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;
long fact(int num){
	long factorial = 1 ;

	for(int i = 2; i <= num; i++){
		factorial *= i;
	}

	return factorial;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[11];
		for (int i = 0; i < 11; i++){
			cin >> arr[i];
		}

		int k;
		cin >> k;

		sort(arr, arr + 11);

		int min = arr[11 - k];

		int r = 0;
		int n = 0;

		for(int i = 10; i >= 11 - k; i--){
			if(arr[i] == min){
				r++;
			}
		}

		for(int i = 0; i < 11; i++){
			if(arr[i] == min){
				n++;
			}
		}

		long d = fact(r) * fact(n-r);
		long numer = fact(n);
		
		float ans = (long) numer / (long) d;

		cout << ans << endl;
	}
	return 0;
}