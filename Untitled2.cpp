#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	int arr[n];
	printf("Nhap n: ");scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Arr[%d] = ",i);scanf("%d",&arr[i]);
	}
	float tong;
	for(int i=0;i<n;i++){
		tong+=arr[i];
	}
	float tbc=0;
	tbc=tong/n;
	printf("Trung binh cong %f la: %f",tong,tbc);
}
