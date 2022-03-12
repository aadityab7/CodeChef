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

		arr[0] = 1;
		if(n > 1) arr[1] = 2;
		if(n > 2) arr[2] = 4;
		for(int i = 3; i < n; i++){
			arr[i] = arr[i - 1] + 3;
		}

		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}

		cout << endl;
	}
	return 0;
}
