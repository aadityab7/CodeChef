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
		int n;
		cin >> n;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		std::sort(arr, arr + n);
		
		int count = 0;
		
		for(int i = 0; i< n; i++){
			if(count >= arr[i]){
				count ++;
			}
			else{
				break;
			}
		}

		cout << count << endl;
	}
	return 0;
}
