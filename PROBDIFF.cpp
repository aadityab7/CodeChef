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
		int arr[4];
		for(int i = 0; i < 4; i++){
			cin >> arr[i];
		}

		sort(arr, arr + 4);

		int uniq = 1;
		int i = 1;
		while(i < 4){
			if(arr[i] != arr[i - 1]) uniq++;
			i++;
		}

		int ans = 0;

		if(uniq == 2){
			int count = 1;
			for(int i = 1; i < 4; i++){
				if(arr[i] == arr[0]) count++;
			}

			if(count == 2) ans = 2;
			else ans = 1;
		}

		if(uniq >= 3) ans = 2;
		cout << ans << endl;		
	}
	return 0;
}