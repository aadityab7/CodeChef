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
		int n, m;
		cin >> n >> m;
        int arr[n][m];
        string s;
        
		for(int i = 0; i< n; i++){
		    cin >> s;
			for(int j = 0; j < m; j++){
			    arr[i][j] = s[j] - 48;
			}
		}

		int ans = 0;
		for(int i = 0; i< m; i++){
			int curr = 0;
			for(int j= 0; j < n; j++){
				if(arr[j][i] == 1){
					curr++;
				}
			}
			if(curr > 1) ans += (curr * (curr - 1)) / 2;
		}

		cout << ans << endl;
	}
	return 0;
}