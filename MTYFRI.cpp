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
		int k;
		cin >> k;

		int num;
		int x = n / 2;
		if(n % 2 != 0){
			x++;
		}
		int arr1[x];
		int arr2[n - x];
		
		long total1 = 0;
		long total2 = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(i % 2 == 0){
				arr1[i / 2] = num;
				total1 += num;
			}
			else{
				arr2[i / 2] = num;
				total2 += num;
			}
		}
		
		sort(arr1, arr1 + x);
		sort(arr2, arr2 + (n - x));

		string ans = "NO";

		if(total2 > total1){
			ans = "YES";
		}
		else{
		    int i = 0; 
			while(k-- && i < x && i < (n - x)){
				total1 = total1 - arr1[x - i - 1] + arr2[i];
				total2 = total2 - arr2[i] + arr1[x - i - 1];
				if(total2 > total1){
					ans = "YES";
					break;
				}
				i++;
			}
		}
        
		cout << ans << endl;
	}
	return 0;
}