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

		long m;
		cin >> m;

		int p[m];

		for(int i = 0; i < m; i++){
			cin >> p[i];
		}

		int sizes_c[n];
		int arr[n][100] = {};
        int c;
        
		for(int i = 0; i < n; i++){
			cin >> c;
			sizes_c[i] = c;

			for(int j = 0; j < c; j++){
				cin >> arr[i][j];
			}

		}


		//keep track of max pointers for each row
		int max_pointers[100];
		for(int i = 0; i < n; i++){
			sort(arr[i], arr[i] + 100);
			max_pointers[i] = 99;
		}

		long long sum = 0;

		// for(int i = 0; i < n; i++){
		// 	//go to the p[i]th room and add max of that into ans if not empty
		// 	//if max pointer == 0 or pointing to 0 then do nothing



		// }

		// for(int i = 0; i < n; i++){
		// 	for(int j = 99; j >= 0; j--){
		// 		if(arr[i][j] == 0){
		// 			break;
		// 		}
		// 		cout << arr[i][j] << ' ';
		// 	}
		// 	cout << endl;
		// }

		int number;
		int max;

		for(int i = 0; i < m; i++){
			max = max_pointers[p[i]];
			
			if(max >= 0){
				number = arr[p[i]][max];
				//cout << number << ' ';

				if(number > 0){
					sum += number;
				}
				
				max_pointers[p[i]]--;
			}
			
		
		}


		cout << sum << "\n";

	}
	return 0;
}