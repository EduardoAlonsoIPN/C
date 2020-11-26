//Apuntes de C by Luis Eduardo Alonso Ramírez
#include <stdio.h>
#include <stdlib.h>
//Este programa NO es funcional, unicamente es una recopilación
//de codigos y funcionamiento en general del lenguaje C.
int main(void)
{
    //declarar variables
    int valor_usuario;
    char cadena[50];//cadenas de caracteres (Strings)
    char cadena2[50];
  

    //leer numero entero
    printf("Introduzca un numero entero\n");
    scanf("%d", &valor_usuario);
    printf("%d", valor_usuario);


    fflush(stdin); //Limpiar el buffer para recibir para leer otros datos.


    //Leer una cadena de caracteres con espacios con scanf
    printf("\nAhora introduzca su nombre:\n");
    scanf("%[^\n]s", &cadena);
    printf("El nombre introducido es: %s", cadena);


    fflush(stdin); //Limpiar el buffer para recibir para leer otros datos.


    //Leer una cadena de caracteres con espacios con get
    printf("\nAhora introduzca su domicilio:\n");
    gets(cadena2);
    printf("\nLa dirección introducida es es: \n %s", cadena2);
    fflush(stdin);


    //Funcionamiento de puts y gets:
    char v_nombre[]  = "\nIntroduce tu nombre\n";
    puts(v_nombre);
    char v_nom_in[50];
    gets(v_nom_in);
    printf("Tu nombre es: \n");
    puts(v_nom_in);


    //Floats en C tienen 7 decimales de presicion
    //Redondear numero decimal float:
    float num_f = 3.141516
    printf("%.2f \n", num_f) //con el %.nf redondeamos el numero.
    //el 'n' en %.nf representa el número de cifras decimales 
    //a las que queremos redondear.
    //En este caso el 'n' en %.nf es '2',
    //osea redondearemos a 2 cifras decimales.


    //Guardar el valor redondeado de un float:
    float num2_f = 3.141516
    char redondeado_f[16];
    //Usamos (sprintf)
    sprintf(redondeado_f, "%.2f \n", num2_f);
    //Ahora tenemos en un char el numero redondeado.


    //Pedir y trabajar un numero redondeado
    float price;
    printf("Whats the price?\n");
    scanf("%f", &price);
    printf("The total is: %f MXN", price * 1.16);


    //ciclo for
     for(int i = 0; i <= 10; i++){
        printf("%i \n", i);
    }


    return 0; //Finalizar el codigo,
}