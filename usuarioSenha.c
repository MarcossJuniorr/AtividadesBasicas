#include <stdio.h>

int main() {

int Senha, Usuario;

printf("insira o usuario: \n");
scanf("%d", &Usuario);


switch(Usuario)
{

case 1234:

printf("insira a senha: \n ");
scanf("%d", &Senha);

switch(Senha)
 {

case 123456:
printf(" Bem Vindo! Usuario 1234\n");
break;

default:
printf("senha incorreta!");
break;
}
break;

default:
printf("usuario incorreto.\n");
break;

}
 
return 0;



}