#include <stdio.h>

//Escreva um printf com as seguintes informações: nome da disciplina (Algoritmo e Programação), nome do professor (Joyce Siqueira), nome completo do aluno, 
//matrícula, curso, link do repositório do GitHub e qual software foi utilizado: DevC++ ou VSCode



int main()

{ 
printf ("professora: Joyce Siqueira/n");
printf ("aluna: larissa lorraine ferreira barbosa/n");
printf ("matrícula: uc22200367/n");
printf ("curso: Análise e desenvolvimento de sistemas"/n);
printf ("link do GitHub: https://github.com/lari29lo/prova/n");
printf ("software utilizado: DevC++");	
scanf ("%d");


//Deve ser construído um menu, com switch case, que dê acesso as 3 questões. Ou seja,
//para executar a questão A, digite ‘A’; para questão B, digite ‘B’ e; para a questão C, digite ‘C’. Caso a
//opção desejada não seja válida, imprimir “Opcao invalida”

int menu;


    printf ("digite a questão: ");
    scanf ("%d", &menu);
     
    switch (menu) {
  	
    case 1 : printf ("questão A");break;
        case 2 : printf ("questão B");break;
        
           default: printf ("questão invalida");
}

//O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é
//preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre
//1900 e 2022. 

//Caso 1) É um número divisível por 4, mas não é divisível por 100.
//Caso 2) É um número divisível por 4, por 100 e por 400.
 

int ano
    
	printf ("qual seu nome e ano de nasimento: ");
    scanf ("%d", &ano);
     
    switch (ano) 
    
  	(year % 400 == 0)
    (year % 4 == 0) && (year % 100 != 0) )

    case 1 : printf ("ano % 4 == 100");break;
        case 2 : printf ("ano % 4 % 100 % 400");break;
    
        
           default: printf ("não é um ano bissexto, pois não se encaixa em nenhum dos casos.");   
	
}


