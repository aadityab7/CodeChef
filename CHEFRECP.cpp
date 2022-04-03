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
		int a[1000] = {};

		int f = 1;

		for(int i = 0; i < n; i++){
			cin >> arr[i];

			if(f && i > 0 && arr[i] != arr[i - 1]){
					if(a[arr[i] - 1] > 0){
						f = 0;
					}
			}
			
			a[arr[i] - 1]++;

		}

		if(f){

			sort(a, a + 1000);

			int i = 1;
			while(i < 1000 && a[i] == 0){
				i++;
			}

			while(i < 1000){
				if(a[i] == a[i - 1]){
					f = 0;
					break;
				}
				i++;
			}

		}
		
		if(f){
			cout << "YES" << endl; 
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}