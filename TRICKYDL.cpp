#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;
long long arr[40];
//long mod = 1000000007;

int main(){
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < 40; i++){
		arr[i] = (arr[i - 1] * 2);
	    //cout << arr[i] << ' ';
	}
	
	//cout << endl;
	

	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;

		long long diff, num;
		int d1 = 0, d2;
		long max = 0;

		for(int i = 1; i < 40; i++){
				
			num = a * i;
			
			diff = num - (arr[i + 1] - 1);
            
            //cout << num << ' ' << (arr[i + 1] - 1) << endl;
            
			if(diff > max){
				max = diff;
				d2 = i;
			}

			if(diff <= 0){
				break;
			}
			
			d1++;
		}

		cout << d1 << ' ' << d2 << endl;
	}
	return 0;
}