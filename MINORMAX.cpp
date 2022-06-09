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

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int cmax = arr[0];
		int cmin = arr[0];

		string ans = "YES";

		for(int i = 1; i < n; i++){
			if(arr[i] >= cmax){
				cmax = arr[i];
			}
			else if(arr[i] <= cmin){
				cmin = arr[i];
			}
			else{
				ans = "NO";
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}