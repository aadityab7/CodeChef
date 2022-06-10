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

		arr[n - 1] = n;
		int num = n - 1;
		int flag = 0;

		for(int i = n - 2; i >= 0; i--){
			if(flag){
				arr[i] = arr[i + 1] + (num);
				flag = 0;
			}
			else{
				arr[i] = arr[i + 1] - (num);
				flag = 1;
			}
		
			num--;
		}

		for(int i = 0; i < n; i++){
			cout << arr[i] << ' ' ;
		}

		cout << endl;
	}
	return 0;
}