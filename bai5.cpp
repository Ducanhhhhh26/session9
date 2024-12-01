#include<stdio.h>
int main(){
	int option;
	int n; 
	int arr[100];
	int sum=0; 
	
	do{
	printf("   Menu\n");
	printf("1:Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2:In ra gia tri cac phan tu dang quan li\n");
	printf("3:In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4:In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5:In ra cac  phan tu la so nguyen to trong mang  va tinh tong\n");
	printf("6:Nhap vao mot so va thong ke trong mang do co bao nhieu phan tu\n");
	printf("7:Them mot phan tu vao vi tri chi dinh\n");
	printf("8:Thoat"); 
	printf("\n \n "); 
	printf("Moi ban nhap so phan tu:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("arr[%d]=",i); 
		scanf("%d",&arr[i]); 
		}
	printf("Moi ban chon chuong trinh ban muon:");
	scanf("%d",&option);
		int k; 
 			int count2=0; 
	switch(option){
		case 1: 
		printf("Moi ban nhap so phan tu:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		printf("arr[%d]=",i);
		 
		scanf("%d",&arr[i]); 
		} 
		break;
		case 2:
		printf("gia tri cac phan tu dang quan li la:\n"); 
		for(int i =0;i<n;i++){
			printf("%d ",arr[i]); 
		} 
		printf("\n \n \n \n"); 
		break;
		
		case 3:
		for(int i =0;i<n;i++){
			if(arr[i]%2==0){
				printf("%d \n",arr[i]);
				sum+=arr[i]; 
			} 
		} 
		printf("Tong cua cac phan tu chan la %d\n \n \n \n ",sum);
		break;
		case 4:
			{
	
			int max = arr[0];
			int min =arr[0];
			for(int i=0;i<n;i++){
				if(arr[i]>max){
					max=arr[i]; 
				} 
			} 
			for(int i =0;i<n;i++){
				if(arr[i]<min){
					min = arr[i]; 
				} 
			} 
			printf("Gia tri lon nhat la: %d\n",max);
			printf("Gia tri nho nhat la: %d\n \n \n \n ",min); 
		}
		 break; 
		 case 5:
		 	{
			 
		 	int x; 
		 int count=0;
		 int sum2=0; 
		for(x=0;x<n;x++){ 
			count=0;
		for(int i=1;i<=arr[x];i++){
		 
		if(arr[x]%i==0){
	
			count++; 
		}
		} 
	
		if(count==2){
			sum2+=arr[x]; 
			printf("%d la so nguyen to\n",arr[x]); 
		}
	}
		printf("Tong cac gia tri cua cac nguyen to la %d\n",sum2); 
	}
		break;
 		case 6:
 		count2=0; 
		 printf("Moi ban nhap vao 1 so nguyen:");
		 scanf("%d",&k);
        for (int j = 0; j < n; j++) {
            if (arr[j] == k) {
                count2++;          
				}
        }
        printf("Phan tu %d xuat hien %d lan",k,count2); 
        break; 
        case 7:
        	int index;
			int valueItem; 
			printf("mang da cho la:\n"); 
			for(int i=0;i<n;i++){
				printf("%d ",arr[i]); }
			printf("Moi ban nhap gia tri muon chen:");
			scanf("%d", &valueItem);
			printf("Moi ban nhap vi tri muon chen:");
			scanf("%d",&index);
		for(int i=n;i>index;i--){
			arr[i]=arr[i-1]; 
	} 
		arr[index]=valueItem;
		n++;
		printf("mang sau khi da chen la:\n"); 
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]); 
				}
			break; 
		case 8: 
		printf("ban da thoat chuong trinh!"); 
		break; 
		default :
		printf("chuong trinh khong hop le!");
		 
    }
		  
		
	} while(option!=8); 
	return 0;
}
