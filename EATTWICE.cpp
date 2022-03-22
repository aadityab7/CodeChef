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
		int n, m ;
		cin >> n >> m;

		int arr[m] = {};
		int d;
		long num;
		for(int i = 0; i < n; i++){
			cin >> d;
			cin >> num;
			if(num > arr[d - 1]){
				arr[d - 1] = num;
			}
		}

		sort(arr, arr + m);
        
		long ans = arr[m - 1] + arr[m - 2];

		cout << ans << endl;
	}
	return 0;
}