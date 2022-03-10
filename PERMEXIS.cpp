#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long arr[n];
		long mn = ;
		long mx = -1;
		
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] < mn){
				mn = arr[i];
			}
			if(arr[i] > mx){
				mx = arr[i];
			}
		}

		int f = 0;
		// 1 means found ,0 means NOT
		for(int i = mn; i <= mx; i++){
			
			f = 0;
			for(int j = 0; j < n; j++){
				if(arr[j] == i){
					f = 1;
					break;
				}
			}

			if(f == 0) break;

		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
