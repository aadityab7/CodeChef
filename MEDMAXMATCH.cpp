#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

//WRONG ANSWER
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long boys[n];
		long girls[n];

		for(int i = 0; i < n; i++)
		{
			cin >> boys[i];
		}

		for(int i = 0; i < n; i++){
			cin >> girls[i];
		}

		sort(boys, boys + n);
		sort(girls, girls + n);

		long long sum[n];

		for(int i = 0; i < n; i++){
			sum[i] = boys[i] + girls[i];
		}

		sort(sum, sum + n);


		if((n / 2) + 1 < (n - 1) && sum[(n / 2) + 1] > sum[n / 2]){
			cout << sum[(n / 2) + 1] << "\n";
		}
		else{
			cout << sum[n / 2] << "\n";
		}

	}
	return 0;
}
