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
		int arr[10] = {0,0,0,0,0,0,0,0,0,0};
		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num - 1]++;
		}
		
		int mx = 0;
		int mn = 0;
		for(int i = 0; i < 10; i++){
		    if(arr[i] == 0) continue;
			int count = 1;
			for(int j = i + 1; j < 10; j++){
				if(arr[i] == arr[j]){
					count ++;
				}
			}

			if(count == mx){
				if(arr[i] < arr[mn]) mn = i;
				mx = count;
			}
			else if(count > mx){
				mn = i;
				mx = count;
			}
		}

		cout << arr[mn] << endl;

	}
	return 0;
}
