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

		long arr[n];

		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}

		int prev = 1;
		int nums = 1;

		for(int i = 0; i < n; i++){
			if(prev == 1){
				nums = 1;
				
				int j = i;
				while(j < n - 1 && (arr[j] * arr[j + 1]) < 0){
					nums++;
					j++;
				}
				prev = nums;
			}
			else{
				nums = --prev;
			}
			
			cout << nums << ' ';
		}

		cout << endl;
	}
	return 0;
}