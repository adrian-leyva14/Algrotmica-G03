/*Programa: Nombtre y Apellido*/

#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20], apellido[20];

  printf( "Introduce tu nombre: " );
  scanf( "%s", nombre );
  printf("Introduce tu apellido: ");
  scanf("%s", apellido);
  printf( "hola %s %s, buenos dias.", nombre, apellido  );

  getch(); /*pausa*/

  return 0;
}
