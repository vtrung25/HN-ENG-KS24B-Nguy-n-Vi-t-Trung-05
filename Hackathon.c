#include<stdio.h>
int main(){
	int choice;
	int n; 
	int arr[100];
	int value;
	int index=1;
	do{
	
	printf("                    MENU\n");
	printf("1.Nhap so phan tu va gia tri cua mang\n");
	printf("2.In ra cac phan tu trong mang theo dang (arr[0]=1, arr[1]=5,...)\n");
	printf("3.Dem so luong cac so hoan hao co trong mang\n");
	printf("4.Tim gia tri nho thu 2 trong mang\n");
	printf("5.Them mot phan tu vao vi tri dau tien trong mang\n");
	printf("6.Xoa phan tu tai vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Tim kiem phan tu co ton tai trong mang hay khong\n");
	printf("9.Sap xep mang sao cho so le dung truoc so chan dung sau\n");
	printf("10.Dao nguoc thu tu phan tu co trong mang va hien thi theo dang (arr[0]=1-le, arr[1]=2-chan,...)\n");
	printf("11.Thoat\n");
	printf("Moi ban lua chon chuc nang ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Nhap so luong phan tu ");
			scanf("%d", &n);
			for(int i = 0; i<n; i++){
				printf("Nhap gia tri cua phan tu thu %d ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for(int i = 0; i<n; i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
		case 3:
		
		    break;
		case 4:
		
		    break;
		case 5:
			printf("Nhap gia tri can them vao vi tri dau tien trong mang ");
			scanf("%d", &value);
			for(int i = n; i>=index; i--){
				arr[i]=arr[i-1];
			}
			arr[index-1]=value;
			n++;
			for(int i = 0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			
			
		
			break;
		case 6:
		
			break;
		case 7:
		
			break;
		case 8:
		
			break;
		case 9:
		
			break;
		case 10:
			
			break;
		case 11:
			
			break;
	}
}while(choice!=11);
	
	return 0;
}
