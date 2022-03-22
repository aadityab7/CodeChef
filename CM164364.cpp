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
		int n, x;
		cin >> n >> x;

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int i = 1;
		int dist = 1;
		while(i < n){
			if(arr[i] != arr[i - 1]){
				dist++;
			}
			i++;
		}

	    if(dist > n - x){
	        dist = n - x;
	    }

		cout << dist << endl;
	}
	return 0;
}