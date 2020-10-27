#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	int arr[n];
	int i;
	for(int i=1;i<=n;i++){
		printf("Arr[%d] = ",i);scanf("%d",&arr[i]);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			max=arr[i];
			for(int j=0;j<i;j++){
				if(arr[j]>max&&arr[j]%2==0){
					max=arr[j];
				}
			}
	 }
}
         if(max!=0){
         	printf("Last Even: %d",max);
		 }
		 else{
		 	printf("No EVEN number");
		 }
      
}
