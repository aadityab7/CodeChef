#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807 ;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, u, d;
		cin >> n >> u >> d;

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i]; 
		}

		long hills = 1;
		int f = 1;

		for(int i = 0; i < n - 1; i++){
			if(arr[i + 1] == arr[i]){
				hills++;
			}
			else if((arr[i + 1] <= arr[i] + u) && (arr[i + 1] >= arr[i] - d)){
				hills++;
			}
			else if(f == 1 && arr[i + 1] < arr[i]){
				f = 0;
				hills++;
			}
			else{
				break;
			}
		}

		cout << hills << endl;

	}
	return 0;
}
