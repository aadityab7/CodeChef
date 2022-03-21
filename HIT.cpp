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
		int n;
		cin >> n;

		int arr[101] = {};
		int f = 1;
		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num]++;
			if(arr[num] > n / 4){
				f = 0;
			}
		}

		int ans[3];
		if(f){
			int count = 0;
			int j = 0;
			for(int i = 100; i >= 0; i--){
				count += arr[i];
				if(count == n / 4){
					ans[j] = i;
					j++;
					count = 0;
				}
				else if(count > n / 4){
				    f = 0;
				    break;
				}
			}
		}

		if(f){
    		for(int i = 2; i >= 0; i--){
    		    cout << ans[i] << ' ';
    		}
    		cout << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}