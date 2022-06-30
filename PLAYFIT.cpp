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

		long arr[n];

		int max = 0;
		int curr;
		int num;
		cin >> num;
		int cmin = num;

		for (int i = 1; i < n; ++i)
		{
			/* code */
			cin >> num;
			
			if(num < cmin){
				cmin = num;
			}
			else{
				curr = num - cmin;

				if(curr > max){
					max = curr;
				}
			}
		}

		if(max > 0){
			cout << max << endl;
		}
		else{
			cout << "UNFIT" << endl;
		}
	}
	return 0;
}