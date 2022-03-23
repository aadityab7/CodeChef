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
		int arr[3];

		for(int i = 0; i < 3; i++){
			cin >> arr[i];
		}

		int c[3];
		for(int i = 0; i < 3; i++){
			cin >> c[i];
		}

		int f= 0;

		for(int i = 0; i < 2; i++){
			for(int j = i + 1; j < 3; j++){
				if(arr[i] > arr[j]){
					if(c[i] <= c[j]){
						f = 1;
						break;
					}
				}
				else if(arr[i] == arr[j]){
					if(c[i] != c[j]){
						f = 1;
						break;
					}
				}
				else{
					if(c[i] >= c[j]){
						f = 1;
						break;
					}
				}
			}

			if(f) break;
		}

		if(f){
			cout << "NOT FAIR" << endl;
		}
		else{
			cout << "FAIR" << endl;
		}
	}
	return 0;
}