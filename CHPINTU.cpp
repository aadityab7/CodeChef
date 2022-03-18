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

		int f[n] = {} , p[n] = {};
		for(int i = 0; i < n; i++)
		    cin >> f[i];
		    
		for(int i = 0; i < n; i++)
		    cin >> p[i];
		
		int arr[m] = {};
		
		for(int i = 0; i < n; i++){
		    if(arr[f[i] - 1] == 0) arr[f[i] - 1]++;
		    arr[f[i] - 1] += p[i];
		}
		

		
		int mn = INT_MAX;
		for(int i = 0; i < m; i++){
			if(arr[i] < mn && arr[i] > 0){
				mn = arr[i];
			}
		}

		cout << mn - 1 << endl;
	}
	return 0;
}