#include<iostream>
// #include <bits/stdc++.h>;
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

		char arr[n][m];

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}

		long ans = 0;

		for(int i = 0; i < n - 1; i++){
			for(int j = 0; j < m - 1; j++){
				char c = arr[i][j];

				int k = 1;
				while(i + k < n && j + k < m){
					if(arr[i + k][j] == c){
						if(arr[i][j + k] == c){
							if(arr[i + k][j + k] == c){
								ans++;
							}
						}
					}

					k++;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
