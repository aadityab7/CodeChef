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

		sort(arr, arr + n);

		int area = -1;

		int a, b;
		int i = n - 1;
		int j, f = 0;
		
		while(i > 0){
			a = arr[i];
			i--;
			if(arr[i] == a){
				j = i - 1;
				while(j > 0){
					b = arr[j];
					j--;
					if(arr[j] == b){
						f = 1;
						area = a * b;
						break;
					}
				}
			}

			if(f == 1){
				break;
			}
		}

		cout << area << endl;
	}
	return 0;
}
