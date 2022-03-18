#include<iostream>
#include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;

		int arr[m];
		for(int i = 0; i < m; i++){
			cin >> arr[i];
		}

		sort(arr, arr + m);

		int ans[n - m];

		int j = 0;
		int k = 0;
		for(int i = 0; i < n; i++){
			if(arr[j] != i + 1){
				ans[k] = i + 1;
				k++;
			}
			else{
				j++;
			}
		}

		for(int i = 0; i < n - m; i = i + 2){
			cout << ans[i] << " ";
		}
		cout << endl;

		for(int i = 1; i < n - m; i += 2){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}