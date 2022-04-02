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
		int arr[n];
		int a[1000] = {};

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int mx = 0;
		int ans;
		int count;
		int f = 1;
		
		for(int i = 0; i < n; i++){
			if(a[arr[i] - 1] == 0){
				count = 0;
				f = 1;
				for(int j = i; j < n; j++){
					if(arr[i] == arr[j]){
					    if(j > i && arr[j] == arr[j - 1]){
					        if(f){
					            f = 0;
					            continue;
					        }
					        else f = 1;
					    }
					    
						count ++;
					}
					else{
					    f = 1;
					}
				}
				a[arr[i] - 1] = 1;
                //cout << arr[i] << ' ' << count << endl;
				if(count > mx){
				    mx = count;
				    ans = arr[i];
				} 
				else if(count == mx){
				    if(arr[i] < ans){
				        ans = arr[i];
				    }
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}