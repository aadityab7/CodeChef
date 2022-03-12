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

		int t1 = 0;
		int t2 = 0;

		for(int i = n - 1; i >= 0; i--){
			if(t1 < t2){
			    t1 += arr[i];
			}
			else{
			    t2 += arr[i];
			}
		}
     
        
		if(t1 > t2){
			cout << t1 << endl;
		}
		else{
			cout << t2 << endl;
		}
	}
	return 0;
}
