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
		int d;
		cin >> d;

		int arr[31] = {};

		int dy, qe, f = 0;
		for(int i = 0; i < d; i++){
			cin >> dy;
			cin >> arr[dy - 1];
		}

		int curr = 0;
		for(int i = 0; i < 31; i++){
			arr[i] += curr;
			curr = arr[i];
		}
    
        int q;
		cin >> q;
		for(int i = 0; i < q; i++){
			cin >> dy;
			cin >> qe;
			if(arr[dy - 1] < qe){
				cout << "Go Sleep" << endl;
			}
			else{
			    cout << "Go Camp" << endl;
			}
		}

	}
	return 0;
}