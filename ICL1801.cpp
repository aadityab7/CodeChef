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
		int n, m;
		cin >> n >> m;

		int s = n * m;

		int arr[s];
		for(int i = 0; i < s; i++){
			cin >> arr[i];
		}

		sort(arr, arr + s);

		long s1 = 0, s2 = 0;

		int f = 1;
		for(int i = s - 1; i >= 0; i--){
			if(f){
				s1 += arr[i];
				f = 0;
			}
			else{
				f = 1;
				s2 += arr[i];
			}
		}

		if(s1 > s2){
			cout << "Cyborg" << endl;
		}
		else if(s2 > s1){
			cout << "Geno" << endl;
		}
		else{
			cout << "Draw" << endl;
		}
	}
	return 0;
}