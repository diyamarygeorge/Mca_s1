#include<stdio.h>
int a[5],pos=-1;
int insert(int n){    
	if(pos==4){
		printf("error:array is full\n");
		return pos;
	}
	a[++pos]=n;
	return pos;
}
	void del()   {
		if(pos==-1){
			printf("error :empty array\n");
			
		}
		printf("%d removed\n",a[pos--]);
	
	}
	void display(){
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
	  void sort(){
	  	int s;
	  	printf("sorted is:\n");
	  	for(int i=0;i<=pos;i++)
	  	{
	  		for(int j=0;j<=pos;j++)
	  		{
	  			if(a[j]>a[i])
	  			{
	  				s=a[i];
	  				a[i]=a[j];
	  				a[j]=s;
				  }
			  }
		  }
		  for(int i=0;i<=pos;i++){
		  	printf("%d\t", a[i]);
		  }
		  printf("\n");
	  }
	int menu(){
		int input;
		printf("1.insert\n 2.delete\n 3.display all\n 4.sort\n 5.exit\n your choice:");
		scanf("%d",&input);
		return input;
	}
	void processarray(){
		int ch;
		for(ch=menu();ch!=5;ch=menu()){
			switch(ch){
				case 1:
					int value;
					printf("enter element:");
					scanf("%d",&value);
					pos=insert(value);
					break;
					
				case 2:
					del();
					break;
				case 3:
					display();
					break;
				case 4:
					sort();
					break;
					
				default:
					printf("wrong choice\n");
					
			}
		}
	}
	int main(){
	processarray();
	return 0;	
	}
	

