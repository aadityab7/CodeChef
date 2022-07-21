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

		bool is_rainbow = true;		

		//taking input array
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}


		int i = 0;
		int arr[7] = {};
		int curr = 1;
		int forward = 1;
		int ocuured[7] = {};

		while(i < n && is_rainbow){

			if(a[i] != curr){
				is_rainbow = false;
				break;
			}
			else{
				ocuured[curr - 1] = 1;
			}
			

			if(forward){

				while((a[i] == curr) && (i < n)){
					arr[a[i] - 1]++;
					i++;
				}

				if(curr == 7){
					curr--;
					forward = 0;
				}
				else{
					curr++;
				}
				
			}
			else{
				
				while((a[i] == curr) && (i < n)){
					arr[a[i] - 1]--;
					i++;
				}

				if(arr[curr - 1] != 0){
					is_rainbow = false;
					break;
				}
				curr--;
			}
		}


		//check if all nums occured or not
		for (int j = 0; j < 7; j++)
		{
			if(!ocuured[j]){
				is_rainbow = false;
			}

			if(j != 6 && arr[j] != 0){
				is_rainbow = false;
			}
		}

		//check if rainbow 
		if(is_rainbow){
			cout << "yes" << "\n";
		}
		else{
			cout << "no" << "\n";
		}
	}
	return 0;
}