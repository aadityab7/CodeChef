#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		int n;
		cin >> n;
		int m;
		cin >> m;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		char c;
		int num;
		int head = 0;
		int pos;

		for(int i = 0; i < m; i++){
			cin >> c;
			cin >> num;

			if(c == 'R'){
				pos = head + num - 1;
				pos = pos % n;
				cout << arr[pos] << "\n";
			}
			else if(c == 'C'){
				head = (head + num) % n;	
			}
			else{
				num = n - num;
				head = (head + num) % n;
			}
		}

	return 0;
}