#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int arr[n];

		for (int i = 0; i < n; ++i)
		{
			/* code */

			cin >> arr[i];
		}

		sort(arr, arr + n);


		int truthful_people = 0;
		int i = 0;

		int num = n;
		
		while(i < n && num > 0){
			num -= arr[i];
			if(num > 0){
				truthful_people++;
			}
			i++;
		}


		cout << truthful_people << "\n";
	}
	return 0;
}