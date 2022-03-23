#include<iostream>
#include <bits/stdc++.h>
#include <vector>
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
			arr[i] = i;
		}

		std::vector<int> a;
		int f = 0;	
		int num;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num - 1 > i) f = 1;
			a.push_back(num);
		}

		sort(a.begin(), a.end());

		for(int i = a.size() - 1; i >= 0; i--){
			num = a[i];
			if(num >= n - 1){
				f = 1;
			}
			else if(num >= 0){
				int temp = arr[num];
				arr[num] = arr[num + 1];
				arr[num + 1] = temp;
			}
		}

		if(f){
			cout << -1 << endl;
		}
		else{
			for(int i = 0; i < n; i++){
				cout << arr[i] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}     