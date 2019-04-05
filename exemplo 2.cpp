#include<stdio.h>
#include<conio.h>

main(){
	float imc,peso,alt;
	printf("Informe o seu peso \n");
	scanf("%f",&peso);
	printf("Informe a sua altura \n");
	scanf("%f",&alt);
	imc = (peso/(alt*alt));
	
	if (imc<= 18.5)
		printf("abaixo do peso");
	else if((imc >=18.6)&&(imc<= 24.9))
		printf("Bom");
		
	else if((imc >=125)&&(imc<= 29.9))
		printf("Alto peso");
		
	else if((imc >=30)&&(imc<= 34.9))
		printf("obesidade grau I");
		
	else if((imc >=35)&&(imc<= 39.9))
		printf("obesidade grau II");
	else
	printf("Obesidade grau III");	
}
