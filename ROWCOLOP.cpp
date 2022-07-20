#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int n;
// 	cin >> n;

// 	long long arr[n][n] = {};

// 	long q;
// 	cin >> q;

// 	while(q--){
	    
// 	   // for(int i = 0; i < n; i++){
//     // 		for(int j = 0; j < n; j++){
//     // 			cout << arr[i][j];
//     // 		}
//     // 		cout << "\n";
//     // 	}
    	
//     // 	cout << "\n";
    	
// 		string s;
// 		cin >> s;

// 		long num;
// 		cin >> num;
        
//         num--;
        
// 		long x;
// 		cin >> x;


// 		if(s == "RowAdd"){
// 			for(long i = 0; i < n; i++){
// 				arr[num][i] += x;
// 			}
// 		}
// 		else{

// 			for(long i = 0; i < n; i++){
// 				arr[i][num] += x;
// 			}
// 		}
// 	}

// 	long long max = 0;
	
// 	for(long i = 0; i < n; i++){
// 		for(long j = 0; j < n; j++){
// 			if(arr[i][j] > max){
// 				max = arr[i][j];
// 			}
// 		}
// 	}

// 	cout << max << "\n";

// 	return 0;
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

	long n, q;
	cin >> n >> q;

	long long total_row_addition[n] = {};
	long long total_col_addition[n] = {};

	for(int i = 0; i < q; i++){
		string s;
		cin >> s;

		long row_col_num;
		cin >> row_col_num;

		row_col_num--;

		long x;
		cin >> x;

		if(s == "RowAdd"){
			total_row_addition[row_col_num] += x;
		}
		else{
			total_col_addition[row_col_num] += x;
		}
	}

	long long Row_max = 0, col_max = 0;

	for(long i = 0; i < n; i++){
		if(total_row_addition[i] > Row_max){
			Row_max = total_row_addition[i];
		}

		if(total_col_addition[i] > col_max){
			col_max = total_col_addition[i];
		}
	}

	long long max = col_max + Row_max;

	cout << max << "\n";


	return 0;
}