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
		int n;
		cin >> n;

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int n1 = 0, n2 = 0;
		for(int i = 0; i < n - 1; i++){
			int j = i + 1;
			if(arr[i] > arr[j]) n2++;
			for(j = i + 1; j < n; j++){
				if(arr[i] > arr[j]){
					n1++;
				}
			}
		}

		if(n1 == n2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
