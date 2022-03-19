#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d",&n,&m);

		int mx = 0;
		int arr[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			if(arr[i] > mx) mx = arr[i];
		}

		long total = 0;
		for(int i = 0; i < n; i++){
			total += mx - arr[i];
		}
        
        char ans[3] = "No";
        if(m >= total){
            m = m - total;
            if(m % n == 0){
                ans[0] = 'Y';
                ans[1] = 'e';
                ans[2] = 's';
            }
        }
        
        printf("%s\n", ans);
	}
	return 0;
}