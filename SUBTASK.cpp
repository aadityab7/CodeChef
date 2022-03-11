#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;

		int flag = 1;
		int count = 0;
        int num;
        
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 0){
				flag = 0;
			}
			else if(flag == 1 && num == 1){
				count++;
			}
		}

		if(count == n){
			cout << 100 << endl;
		}
		else if(count >= m){
			cout << k << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	return 0;
}
