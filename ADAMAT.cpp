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

		int arr[n][n];

		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];
			}
		}

		int ans = 0;
		int flipped = 0;

		for(int i = n - 1; i > 0; i--){
			for(int j = 0; j < i; j++){
				if(flipped){
					if((i * n + (j + 1)) == arr[i][j]){
						ans++;
						flipped = 0;
						break;
					}
				}
				else{
					if((i * n + (j + 1)) != arr[i][j]){
						ans++;
						flipped = 1;
						break;
					}	
				}
			}	
		}

		cout << ans << endl;
	}
	return 0;
}