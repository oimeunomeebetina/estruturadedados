#include<stdio.h>
 
void calculo (int a , int b){
	if(a>0){
		int a2=a*a;
		printf ("numero ao quadrado: %d \n",a2);
	}
	if((b>10) && (b<100)){//comparativo
		printf("Intervalo Permitido\n");//printando as coisas
	}
    if(a>b){
    	int sub=a-b;
    	printf("Subtracao %d",sub);
	}else{
	
	
	a=a+1;
	printf("primeiro numero mais 1: %d",a);
	
}
}
 main(){
 	
	int n1 , n2;
	printf("informe dois numeros  : ");
	scanf("%d %d",&n1,&n2);//calculo
	
	calculo(n1,n2);
	
	
 }
