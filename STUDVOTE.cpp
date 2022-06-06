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
		int n, k;
		cin >> n >> k;

		int a[n] = {};
		int votes[n] = {};
    
        
		for(int i = 0; i < n; i++){
			cin >> a[i];
			votes[a[i] - 1]++;
		}

		int ans = 0;
		
		for (int i = 0; i < n; i++){
			if(votes[i] >= k){
				if(a[i] == i + 1){
				   continue; 
				}else{
				    ans++;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}