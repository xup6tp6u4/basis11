#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x,y,z,t;
	printf("��J�T��x,y,z\n");
	scanf("%d%d%d",&x,&y,&z);
	int array[3]={x,y,z};
	for(int i=0;i<2;i++)
		for(int j=i+1;j<3;j++){
			if(array[j]>array[i]){
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
		}
	for(int i=2;i>=0;i--){
		printf("%d",array[i]);
		printf(" ");
	}
}
