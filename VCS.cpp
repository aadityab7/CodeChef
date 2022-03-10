#include<iostream>
//#include <string>
#include <vector>
//max val of long 9223372036854775807 ;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
        
        int num;
		std::vector<int> arr;
		arr.assign(n, 0);
		
		for(int i = 0; i < m + k; i++){
			cin >> num;
			arr[num - 1]++;
		}

        int a = 0, b = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == 2){
				a++;
			}
			else if(arr[i] == 0){
				b++;
			}
		}

		cout << a << " " << b << endl;

	}
	return 0;
}
