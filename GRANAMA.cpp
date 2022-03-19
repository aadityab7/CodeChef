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
		string a, b;
		cin >> a;
		cin >> b;

		int arr[26] = {};
		int arr2[26] = {};

		for(int i = 0; i < a.size(); i++){
			arr[a[i] - 97]++;
		}

		for(int i = 0; i < b.size(); i++){
			arr2[b[i] - 97]++;
		}
        
        
		int f = 0;
		for(int i = 0; i < 26; i++){
			if(arr[i] > 0 && arr2[i] == 0){
				f = 1;
				break;
			}
			else if(arr[i] == 0 && arr2[i] > 0){
				f = 1;
				break;
			}
		}

		int f2 = 0;
		for(int i = 0; i < 26; i++){
			if(arr[i] != arr2[i]){
				f2 = 1;
				break;
			}
		}
        
		if(f == f2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}