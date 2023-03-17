//Alejandra Berenice López Legorreta Proyecto Zodiaco Certificación 23-1

#include <stdlib.h> //libreria estándar de C, se usará para usar la función exit();
#include <stdio.h> //“standar input output”, librería estandar de entrada y salida de datos.

/*Como los métodos no necesitan retornar un valor para
continuar con otros procesos (son métodos independientes) serán métodos void.
Mostrar un resultado en pantalla no es retornar un valor.
*/
void menu();
void asignarSigno();
void compatibilidadSigno();
void listaSignos();

void menu(){
    
    int opc;

    printf("\n1.- Saber tu signo zodiacal oprime 1");
    printf("\n2.- Saber la compatibilidad entre 2 signos oprime 2");
    printf("\n3.- Saber los signos zodiacales y sus fechas oprime 3");
    printf("\n4.- Nada oprime 0\n");
    scanf("%i",&opc);

    switch (opc)
    {
    case 0:
        printf("\nBais\n");
        /*La función exit() obliga al programa a cerrarse, con paramétro
        0 para indicar que salio sin errores*/
        exit(0);
    break;
    case 1:
        //Llamada a la función (método) asignarSigno();
        asignarSigno();
        break;
    case 2:
        //Llamada a la función (método) compatibilidadSigno();
        compatibilidadSigno();
        break;
    case 3:
        //Llamada a la función (método) listaSignos();
        listaSignos();
        break;
    default:
        printf("Opción no valida");
        
        /*
        Llamada a la función (método) menu() dentro de si misma.
        A esto se le llama recursividad, esto servirá para empezar
        de nuevo*/
        menu();
        break;
    }

}

void asignarSigno(){

    //Declaración de variables dia y mes
    int dia;
    int mes;
    int opc;
    
    //Mostrar mensaje al usuario que le da las instrucciones.
    printf("\n¡Hola! Para saber tu signo ingresa dia y mes en que naciste\n");
    //Obtener los datos dia y mes para poder asignar el signo
    printf("Ingresa el dia y oprime la tecla enter \n");
    scanf("%d", &dia);  
    printf("\nIngresa el mes y oprime la tecla enter \n");
    scanf("%d", &mes);
    //Mostrar datos que el usuario ingresó
    printf("\nIngresaste el dia %d y %d mes\n",dia,mes);
    
    //Confirmar que los datos ingresados sea correctos
    printf("¿Es correcto? oprime SI/1 NO/0\n");
    scanf("%d", &opc); 

    if (opc == 0) {
    //En caso de que los datos sean incorrectos empezar de nuevo
    asignarSigno(); //Recursividad
    }
    
    //Esctructura switch case para procesar los casos por mes
    switch (mes) 
    {
    case 1:
    if (dia <= 19) {
    printf("¡Eres Capricornio!\n");
    } else {
    //Por simplifacion los dias restantes de enero seran de acuario, por eso es inecesario repetir la formula
    printf("¡Eres Acuario!\n");
    } 
    break;

    case 2:
    if (dia <= 18) {

    printf("¡Eres Acuario!\n");

    } else {
    
    printf("¡Eres Piscis!\n");
    } 
    break;

    case 3:

    if (dia <= 20) {

    printf("¡Eres Piscis!\n");

    } else {
        
    printf("¡Eres Aries!\n");

    }
    break;
    case 4:

    if (dia <= 19) {

    printf("¡Eres Aries!\n");

    } else {
        
    printf("¡Eres Tauro!\n");

    }
    break;
    case 5:

    if (dia <=20 ) {

    printf("¡Eres Tauro!\n");

    } else {
        
    printf("¡Eres Geminis!\n");

    }
    break;
    case 6:

    if (dia <=21 ) {

    printf("¡Eres Geminis!\n");

    } else {
        
    printf("¡Eres Cancer!\n");

    }
    break;

    case 7:

    if (dia <=22 ) {

    printf("¡Eres Cancer!\n");

    } else {
        
    printf("¡Eres Leo!\n");

    }
    break;

    case 8:

    if (dia <=22) {

    printf("¡Eres Leo!\n");

    } else {
        
    printf("¡Eres Virgo!\n");

    }
    break;

    case 9 :

    if (dia <=22 ) {

    printf("¡Eres Virgo!\n");

    } else {
        
    printf("¡Eres Libra\n");

    }
    break;
    case 10:

    if (dia <=22 ) {

    printf("¡Eres Libra!\n");

    } else {
        
    printf("¡Eres Escorpio!\n");

    }
    break;
    case 11:

    if (dia <= 21) {

    printf("¡Eres Escorpio!\n");

    } else {
        
    printf("¡Eres Sagitario!\n");

    }
    case 12:

    if (dia <= 21) {

    printf("¡Eres Sagitario!\n");

    } else {
        
    printf("¡Eres Capricornio!\n");

    }
    break;
    default:
    //Si los datos son erroneos volver al menu
    printf("Datos erroneos, dia o mes incorrectos");
    menu(); //Llamada a la función menu
    break;
    }

    //Segundo menú para cuando termine el switch case de asignación de signo
    int opc1;
    printf("\nOprime 1 para ir al menu principal, 2 para volver a empezar 0 para terminar\n");
    scanf("%i",&opc1);
    switch (opc1)
    {
    case 1:
        menu();
        break;
    case 2:
        asignarSigno();//recursividad   
        break; 
    case 0:
        printf("Bais\n");
        exit(0);
        break; 
    default:
        printf("Opción no válida, se muere\n");
        exit(0);
        break;
    }
}

void compatibilidadSigno(){

    int signo1;
    int signo2;
    
    /*Obtener los datos de entrada del tipo int*/
    printf("\nPara saber la compatibilidad de signos elige 2 de acuerdo a su número\n");
    printf("\n1.-Aries \t2.-Leo \t\t3.-Sagitario"); //Fuego
    printf("\n4.-Cáncer \t5.-Escorpio \t6.-Piscis"); //Agua
    printf("\n7.-Geminis \t8.-Libra \t9.-Aquario"); //Aire
    printf("\n10.-Tauro \t11.-Virgo \t12.-Capricornio"); //Tierra

    printf("\n\nEscribe el primer signo\n");
    scanf("%i",&signo1);
    printf("\nEscribe el segundo signo\n");
    scanf("%i",&signo2);

    /*Estructura switch case que tiene como parámetro al signo1, por cada
    caso se comparará con el valor de signo2 y se mostrará un mensaje en
    pantalla del resultado*/
    switch (signo1)
    {
        case 1: //Grupo fuego
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 2:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 3:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break; //Termina grupo fuego

        case 4: //Grupo agua
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            }else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 5:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            }else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 6:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("No son compatibles. Tienen un super 0 :(\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break; //Termina grupo agua

        case 7: //Grupo aire
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 8:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;
        case 9:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Son medianamentes compatibles. Tienen un 50, esta medio ñeh :/\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            }
        break;//Termina grupo aire

        case 10: //Grupo tierra
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            }
        break;
        case 11:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            }
        break;
        case 12:
        if (signo2 == 1 || signo2 == 2 ||signo2 == 3) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 4 || signo2 == 5 ||signo2 == 6) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 7 || signo2 == 8 ||signo2 == 9) {
                printf("Solo 25 de compatibilidad. Eso ya esta muerto nomas no les han avisado\n");
            } else if (signo2 == 10 || signo2 == 11 ||signo2 == 12) {
                printf("Son turbocompatibles aaaah te mueres de ternura al 100\n");
            }
        break;//Termina grupo tierra

        default:
        printf("\nOpción no válida");
        
        compatibilidadSigno(); //Recursividad
        break;
    }

    //Segundo menú para cuando termine el switch case de asignación de signo
    int opc;
    printf("\nOprime 1 para ir al menu principal, 2 para ver el menu de compatibilidad y 0 para terminar\n");
    scanf("%i",&opc);

    switch (opc)
    {
    case 1:
        menu();
        break;
    case 2:
    compatibilidadSigno();
        break;
    case 0:
    printf("Bais\n");
    exit(0);
        break; 
    default:
        printf("Opción no válida, se muere\n");
        exit(0);
        break;
    }

}

void listaSignos(){
    
    /*
    Se declara un arreglo que es el tipo de dato char puntero (char *),
    esto se debe a que un arreglo char[n] con espacio n (cualquier número)
    el lenguaje C no permite que se visualicen por completo las cadenas
    de texto, solo se mostrará un carácter.
    
    Cuando es un tipo de dato con puntero se accede a la memoria donde
    el valor de la variable ha sido guardada.
    Una vez que se accede a ese valor ahora permite mostrar en pantalla
    las cadenas de caracteres (porque se accede a donde están guardadas)
    Solo queda iterar (recorrer) el arreglo para mostrar al usuario
    los valores

    Tiene el estilo de una matriz pero no lo es, es un arreglo,
     */
    char *fechasSignos[] =
    {
    "Aries\t", "marzo 21 - abril 19\t",
    "Tauro\t","abril 20 - mayo 20\t",
    "Geminis", "mayo 21 - junio 21\t",
    "Cancer", "junio 22 - julio 22\t",
    "Leo\t", "julio 23 - agosto 23\t",
    "Virgo\t", "agosto 23 - septiembre 22",
    "Libra\t", "septiembre 23 - octubre 22",
    "Escorpio", "octubre 23 - noviembre 21",
    "Sagitario","noviembre 22 - dicembre 21",
    "Capricornio", "diciembre 22 - enero 19",
    "Acuario", "enero 20 - febrero 18",
    "Piscis", "febrero 19 - marzo\t"
    };

    /*Variables de control para el ciclo for, que es una
    estructura de control repetitiva
    La variable i se usará para recorrer y mostrar los
    valores del arreglo.
    La variable j se usará para dar un formato en la
    salida, (en como se muestra al usuario)*/
    int i;
    int j;

    /*El tamaño del arreglo es de 24 elementos por que
    son 12 signos y 12 fechas*/
    int tam = 24;

    printf("_________________________________________________\n");
    printf("\n| Signo \t||\tFecha\t\t\t|\n");
    printf("_________________________________________________\n");
    
    /*Se inicia el iterardor (i) en 0 y cuando su valor sea 24
    debido a que se incrementa en 1 (i++) ya no cumplira
    la condición menor a 24, por lo que se saldrá del ciclo for.

    La variable i no solo sirve para salir del for, si no que
    también se usará para imprimir los elementos del arreglo
    por cada valor de i*/
    for (i = 0; i < tam; ++i)
    {   
        /*La variable j se incrementará en 1, esto servirá
        para imprimir un salto de linea cada dos iteraciones
        del for, cuando j tenga un valor igual a 2 se le
        asignará un valor de 0 en el if*/
        j++;

        /*
        Como fechaSignos es un arreglo se debe especificar
        qué elemento en n posición se ha de imprimir.
        Cuando i valga 0, se mostrará el elemento en la
        posición 1 del arreglo, cuando i valga 1, se mostrará
        el elemento en la posición 2, así hasta 24 veces
        */

        printf("| %s\t|", fechasSignos[i]);

        /*Condición if para j, si j vale 2 dar un salto de linea*/
        if (j == 2)
        {
            printf("\n");
            //Despues del salto de linea el valor de j será 0
            j = 0;
        }
    }
    printf("_________________________________________________\n");

    //Segundo menú para cuando termine el for de compatibilidad
    int opc;
    printf("\nOprime 1 para ir al menu principal, o 0 para terminar\n");
    scanf("%i",&opc);

    switch (opc)
    {
    case 1:
        menu();
        break;
    case 0:
    printf("Bais\n");
    exit(0);
        break; 
    default:
        printf("Opción no válida, se muere\n");
        exit(0);
        break;
    }
}

int main()
{
    /*La clase main es donde empezará el flujo de trabajo comenzará
    llamando a la primera función llamada menu*/
    printf("\nHola ¿Qué quieres saber hoy?\n");
    menu();

    return 0;

}
