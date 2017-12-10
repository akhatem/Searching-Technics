#include <stdio.h>

int main(){
	printf("Please enter the number of N space-separated integers\n");
	int n;
	scanf("%d,",&n);
	int lo = 0, mid = 0, hi = n-1, arr[n], input;
	printf("Please enter the number you want to search for\t");
	scanf("%d",&input);
	bool flag = false;
	printf("Please enter the N space-separated integers\n");
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	printf("\n\n");
	while(lo <= hi){
		mid = lo + (hi - lo) /2;
		if(input < arr[mid]){
			 hi = mid - 1;
			 for(int i = lo; i < mid; ++i)
				printf("%d ", arr[i]);
			printf("\n");
		 }
		else if(input > arr[mid]){
			 lo = mid + 1;
			 for(int i = lo; i <= hi; ++i)
				printf("%d ", arr[i]);
			printf("\n");
		 }
		else{
			flag = true;
			break;
		}
	}
	if(flag == true)
		printf("The number %d is found\n",arr[mid]);
	else
		printf("The number %d not found\n", input);
	return 0;
}
