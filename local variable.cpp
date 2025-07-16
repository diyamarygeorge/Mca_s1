#include<stdio.h>
int insert(int n, int a[], int pos){    
	if(pos==4){
		printf("error:array is full\n");
		return pos;
	}
	a[++pos]=n;
	return pos;
}
	int del(int a[], int pos)   {
		if(pos==-1){
			printf("error :empty array\n");
			return pos;
		}
		printf("%d removed\n",a[pos--]);
		return pos;
	}
	void display(int a[], int pos){
		int i;
		if(pos==-1){
			printf("array is empty\n");
			return;
		}
		for(i=0;i<=pos;i++){
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	int menu(){
		int input;
		printf("1.insert\n 2.delete\n 3.display all\n 4.exit\n your choice:");
		scanf("%d",&input);
		return input;
	}
	void processarray(int a[], int pos){
		int ch;
		for(ch=menu();ch!=4;ch=menu()){
			switch(ch){
				case 1:
					int value;
					printf("enter element:");
					scanf("%d",&value);
					pos=insert(value, a,pos);
					break;
					
				case 2:
					pos=del(a,pos);
					break;
				case 3:
					display(a,pos);
					break;
					
				default:
					printf("wrong choice\n");
					
			}
		}
	}
	int main(){
	int a[5], pos=-1;
	processarray(a,pos);
	return 0;	
	}
	

