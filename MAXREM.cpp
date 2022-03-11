#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
		int n;
		cin >> n;
		int mx1, mx2;

		int n1, n2;
		cin >> n1 >> n2;

		if(n1 > n2){
			mx1 = n1;
			mx2 = n2;
		}
		else{
			mx1 = n2;
			mx2 = n1;
		}

		int num;
		for(int i = 2; i < n; i++){
			cin >> num;

			if(num > mx1){
				mx2 = mx1;
				mx1 = num;
			}
			else if(num < mx1 && num > mx2){
				mx2 = num;
			}
		}

		if(mx1 == mx2){
			cout << 0 << endl; 
		}
		else{
		    cout << mx2 << endl;    
		}
		
	return 0;
}
