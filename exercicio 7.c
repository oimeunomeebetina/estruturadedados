void vot(int idade){
 if((idade > 18 )&& (idade< 70)){
 	printf("Obrigado a votar ");
 	}
	else if (idade == 16){
 		printf("Facultativo");
 	}
	else if (idade >= 70){
	
		printf("Facultativo");
	}
}


main(){
	int idade , titulo;
	char  nome[20];
	
printf("informar sua idade  : ");
scanf("%d",&idade);
printf("informar seu nome  : ");
scanf("%s",&nome);
printf("informar seu titulo  : ");
scanf("%d",&titulo);
printf("**************************** \n");
printf("nome :%s \n",nome);
printf("idade : %d \n",idade);
printf("Nº titulo :%d \n",titulo);
vot(idade);


}
