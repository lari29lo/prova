#include <stdio.h>

//Escreva um printf com as seguintes informa��es: nome da disciplina (Algoritmo e Programa��o), nome do professor (Joyce Siqueira), nome completo do aluno, 
//matr�cula, curso, link do reposit�rio do GitHub e qual software foi utilizado: DevC++ ou VSCode



int main()

{ 
printf ("professora: Joyce Siqueira/n");
printf ("aluna: larissa lorraine ferreira barbosa/n");
printf ("matr�cula: uc22200367/n");
printf ("curso: An�lise e desenvolvimento de sistemas"/n);
printf ("link do GitHub: https://github.com/lari29lo/prova/n");
printf ("software utilizado: DevC++");	
scanf ("%d");


//Deve ser constru�do um menu, com switch case, que d� acesso as 3 quest�es. Ou seja,
//para executar a quest�o A, digite �A�; para quest�o B, digite �B� e; para a quest�o C, digite �C�. Caso a
//op��o desejada n�o seja v�lida, imprimir �Opcao invalida�

int menu;


    printf ("digite a quest�o: ");
    scanf ("%d", &menu);
     
    switch (menu) {
  	
    case 1 : printf ("quest�o A");break;
        case 2 : printf ("quest�o B");break;
        
           default: printf ("quest�o invalida");
}

//O usu�rio deseja verificar se seu ano de nascimento � um ano bissexto ou n�o. Para tal, �
//preciso solicitar o nome do usu�rio e ano de nascimento, garantindo que seja um ano v�lido, ou seja, entre
//1900 e 2022. 

//Caso 1) � um n�mero divis�vel por 4, mas n�o � divis�vel por 100.
//Caso 2) � um n�mero divis�vel por 4, por 100 e por 400.
 

int ano
    
	printf ("qual seu nome e ano de nasimento: ");
    scanf ("%d", &ano);
     
    switch (ano) 
    
  	(year % 400 == 0)
    (year % 4 == 0) && (year % 100 != 0) )

    case 1 : printf ("ano % 4 == 100");break;
        case 2 : printf ("ano % 4 % 100 % 400");break;
    
        
           default: printf ("n�o � um ano bissexto, pois n�o se encaixa em nenhum dos casos.");   
	
}


