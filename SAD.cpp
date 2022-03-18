#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;
using namespace std;

int main(){
	int r, c;
	cin >> r >> c;

	int mnr [r];
	int mxc [c];

	long arr[r][c];
	long mn;
	for(int i = 0; i < r; i++){
		mn = INT_MAX;
		for(int j = 0; j < c; j++){
			cin >> arr[i][j];
			if(arr[i][j] < mn){
				mn = arr[i][j];
			}
		}

		mnr[i] = mn;
		
	}

	long mx;
	for(int i = 0; i < c; i++){
		mx = -1;
		for(int j = 0; j < r; j++){
			if(arr[j][i] > mx){
				mx = arr[j][i];
			}
		}

		mxc[i] = mx;
	}

	int f = 0;
	long ans;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(mnr[i] == mxc[j]){
				ans = mnr[i];
				f = 1;
				break;
			}	
		}
		if(f){
			break;
		}
	}
	
	if(f){
		cout << ans << endl;
	}
	else{
		cout << "GUESS" << endl;
	}

	return 0;
}