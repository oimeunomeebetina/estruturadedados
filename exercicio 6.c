#include<stdio.h>

void dobro(int a ,int b){//pedindo as vareavies inteiras
	a = a*2;
	b = b*2;
	printf( "dobro = a[ %d ]b[ %d ] \n",a,b);
}

void qudrado (int a ,int b){
	a = (a*a);
	b = (b*b);
	printf( "qudrado = a[ %d ]b[ %d ]\n",a,b);//mostrando os resultados

}
void div (int a , int b){
	int d;
	d = a /b;
	printf( "div = %d \n ",d);
}

void  resto(int a , int b){
	int m;
	m = a%b ;
	printf( "\n resto = %d",m);
}

void somapn(int a , int b){
	int soma;
	soma = 	a+b;

	
	
	if(soma > 0  ){
	
		printf("[ %d ] = positivo",soma);
		}else{
		printf(" [ %d ] = negativo",soma);
	}
	
}


main()
{
	float x ,y , result;
	

	printf("Insira dois numeros : \n");
	scanf("%f %f",&x,&y);
	
	
	dobro(x,y);
	qudrado(x,y);
	div(x,y);
	somapn(x,y);
	resto(x,y);
	
}
