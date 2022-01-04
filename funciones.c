#include "funciones.h"
#include <string.h>
#include<stdbool.h>
#include <math.h>
#include <stdlib.h> 

//___________________________________FUNCIONES CON SISTEMA DECIMAL______________________________
/**
 * @brief Función que realiza la conversión de un número del sistema binario al sistema decimal
 * @param bin que es una cadena
 * @return num que corresponde a un entero
 * @programador: Arellanes Conde Esteban
 * @ÚltimaModificación: 30 de diciembre de 2021
 */
    
int conv_bin_decimal(char *bin){
    int num = 0, poww = 0;
    for(int i = strlen(bin)-1; i>=0; i--){//El contador de la funcion toma el valor de la longitud de la cadena, y va dismunuyendo
        if(bin[i]=='1') //Usando el contador se lee los caracteres de la cadena de forma inversa
            num= num + pow(2, poww); //Si el caracter es 1 se le suma a num 2 a al numero del ciclo actual, iniciando en 0
        poww = poww + 1;//La potencia aumenta en 1 previo al final de cada ciclo
    }
    return num;//Se retorna la suma total siendo el equivalente del numero binario en decimal
}


/**
 * @brief Función que realiza la conversión de un número del sistema decimal al sistema binario
 * @param num que corresponde a un entero
 * @return bin que es una cadena
 * @programador: Arellanes Conde Esteban
 * @ÚltimaModificación: 30 de diciembre de 2021
 */
char* conv_decimal_bin(int num){
    int t=0, i=0, j=0;
    
    char *a=NULL, *bin=NULL;
    a = (char*)malloc(sizeof(char));
    strcpy(a, "");

    do{
        t= num % 2;  //Se obtiene el modulo de num/2 asignandose a t   
        num = (int)(num /2);//Se asigna a num el valor del cociente entero de num/2
        if(t==1) strcat(a, "1");//Se concadena un 1 o 0 dependiendo del valor t
        else strcat(a, "0");        
    }while(num!=1 && num!=0);//Se detiene el ciclo cuando num vale 0 o 1
    
    if(num== 1) strcat(a, "1");//Si num vale 1 se concadena otra vez un 1 

    bin = (char*)malloc(strlen(a)*sizeof(char));
    for(i=strlen(a)-1, j=0; i >=0; i--, j++){//Invierte la cadena apoyandose un contador regresivo con valor de la longitud de a y uno progresivo que inicia en 0
        bin[j] = a[i];
    }
    free(a);
    a = NULL;
    return bin;
}
/**
 * @brief Función que realiza la conversión del sistema decimal al sistema hexadecimal
 * @param num que corresponde a un entero
 * @return hexa que es una cadena
 * @programador: López López Axel Dion
 * @ÚltimaModificación: 2 de enero de 2022
 */
char* decimal_hexa(int num){
int t=0, i=0, j=0;
    char *a=NULL, *hexa=NULL;
    a = (char*)malloc(sizeof(char));//Devuelve un apuntador de tamaño de la memoria que ocupa un char
    strcpy(a, "");

    do{
        t= num % 16;   //t es el modulo del valor actual de num entre 16     
        num = (int)(num/16); // num se divide entre 16 con cociente entero y se el asigna como nuevo valor
        switch(t){
                //En base al valor de t se concadena su equivalente en sistema hexadecimal a la cadena a
            case 0:
                strcat(a, "0");
                break;
            case 1:
                strcat(a, "1");        
                break;
            case 2:
                strcat(a, "2");
                break;
            case 3:
                strcat(a, "3");
                break;
            case 4:
                strcat(a, "4");
                break;
            case 5:
                strcat(a, "5");
                break;
            case 6:
                strcat(a, "6");
                break;
            case 7:
                strcat(a, "7");
                break;
            case 8:
                strcat(a, "8");
                break;
            case 9:
                strcat(a, "9");
                break;
            case 10:             
                strcat(a, "A");
                break;
            case 11:             
                strcat(a, "B");
                break;
            case 12:
                strcat(a, "C");
                break;
            case 13:
                strcat(a, "D");
                break;
            case 14:
                strcat(a, "E");
                break;
            case 15:
                strcat(a, "F");
                break;
        }        
    }while(num > 0);
    hexa = (char*)malloc(strlen(a)*sizeof(char));
    for(i=strlen(a)-1, j=0; i >=0; i--, j++){//Se le asigna i la longitud de la cadena a, en cada repeticion el valor de este disminuye y el de j aumenta
        hexa[j] = a[i];  //Usando los contadores i y j se transcribe la cadena a en hexa de forma inversa
    }
    free(a); 
    a = NULL;
    return hexa;
}  


/**
 * @brief Función que realiza la conversión de un número del sistema octal al sistema decimal
 * @param oct que es una cadena
 * @return num que corresponde a un entero
 * @programador: López López Axel Dion
 * @ÚltimaModificación: 2 de enero de 2022
*/

int oct_decimal(char *oct){
int num = 0, poww = 0;
    for(int i = strlen(oct)-1; i>=0; i--){//Se asigna a i un valor equivalente a la longitud de oct, y se usa como contador de forma regresiva
        switch(oct[i]){//Lee de 1 en 1 los caracteres de oct de forma inversa
                //Se suma a num el valor del caracter multiplicado por 8 elevado a una potencia dada, que aumenta conforme se avanza en la cadena
            case '0':
                num = 0;
                break;
            case '1':
                num += pow(8, poww);
                break;
            case '2':
                num += 2*pow(8, poww);
                break;
            case '3':
                num += 3*pow(8, poww);
                break;
            case '4':
                num += 4*pow(8, poww);
                break;
            case '5':
                num += 5*pow(8, poww);
                break;
            case '6':
                num += 6*pow(8, poww);
                break;
            case '7':
                num += 7*pow(8, poww);
                break;
        }        
        poww = poww + 1; //Aumenta el valor de la potencia previamente usada
    }
    return num;
}


/**
 * @brief Función que realiza la conversión de un número del sistema hexadecimal al sistema decimal
 * @param hexa que es una cadena
 * @return num que corresponde a un entero
 */
int hexa_decimal(char *hexa){
int num = 0, poww = 0;
    for(int i = strlen(hexa)-1; i>=0; i--){
        switch(hexa[i]){//Lee 1 a 1 los elementos de la cadena y suma su equivalente en decimal a num
            case '0':
                num = 0;
                break;
            case '1':
                num += pow(16, poww);//El equivalente en decimal se multiplica por una potencia de 16 segun su posicion en la cadena
                break;
            case '2':
                num += 2*pow(16, poww);
                break;
            case '3':
                num += 3*pow(16, poww);
                break;
            case '4':
                num += 4*pow(16, poww);
                break;
            case '5':
                num += 5*pow(16, poww);
                break;
            case '6':
                num += 6*pow(16, poww);
                break;
            case '7':
                num += 7*pow(16, poww);
                break;
            case '8':
                num += 8*pow(16, poww);
                break;
            case '9':
                num += 9*pow(16, poww);
                break;
            case 'A': 
            case 'a':
                num += 10*pow(16, poww);
                break;
            case 'B': 
            case 'b':
                num += 11*pow(16, poww);
                break;
            case 'C': 
            case 'c':
                num += 12*pow(16, poww);
                break;
            case 'D': 
            case 'd':
                num += 13*pow(16, poww);
                break;
            case 'E': 
            case 'e':
                num += 14*pow(16, poww);
                break;
            case 'F': 
            case 'f':
                num += 15*pow(16, poww);
                break;
        }        
        poww = poww + 1; //La potencia aumenta con cada avanze en la cadena para dar el resultado correcto
    }
    return num;
}


/**
 * @brief Fución que realiza la conversión de un número del sistema decimal al sistema octal
 * @param num que corresponde a un entero
 * @return oct que es una cadena
 */
char* decimal_oct(int num){
int t=0, i=0, j=0;
    char *a=NULL, *oct=NULL;
    a = (char*)malloc(sizeof(char));
    strcpy(a, "");

    do{
        t= num % 8;        
        num = (int)(num/8);
        switch(t){
            case 0:
                strcat(a, "0");
            case 1:
                strcat(a, "1");        
                break;
            case 2:
                strcat(a, "2");  
                break;
            case 3:
                strcat(a, "3");  
                break;
            case 4:
                strcat(a, "4");  
                break;
            case 5:
                strcat(a, "5");  
                break;
            case 6:
                strcat(a, "6");  
                break;
            case 7:
                strcat(a, "7");  
                break;
            
        }        
    }while(num>0);
    
    oct = (char*)malloc(strlen(a)*sizeof(char));
    for(i=strlen(a)-1, j=0; i >=0; i--, j++){
        oct[j] = a[i];
    }
    free(a);
    a = NULL;
    return oct; 
}


//____________________________FUNCIONES CON SISTEMA BINARIO_________________________

/**
 * @brief Función que realiza la conversión de un número del sistema binario al sistema hexadecimal
 * @param bin que es una cadena
 * @return hexa que es una cadena
 */
char* bin_hexa(char *bin){
int num = 0, poww = 0;
    for(int i = strlen(bin)-1; i>=0; i--){
        if(bin[i]=='1') 
            num= num + pow(2, poww);
        poww = poww + 1;
    }
    //Llamada a la función decimal_hexa() 
    num= decimal_hexa(num);
}

//Funciones de referencia: Su unica funcion es llamar a otra funcion equivalente con un nombre distinto, evitando confusiones al programas¿r
/**
 * @brief Funciones que realizan la conversión de un número del sistema hexadecimal al sistema binario
 * @param hexa, num; donde hexa es una cadena y num corresponde a un entero
 * @return num,bin: donde num corresponde a un entero y bin es una cadena
 */
char* hexa_bin(char *hexa)
{
    //Llamada a la función hexa_decimal()
    hexa_decimal(hexa);
}
int hexa_bin2(int num)
{
    //Llamada a la función conv_decimal_bin()
    conv_decimal_bin(num);
}


/**
 * @brief Funciones que realizan la conversión de un número del sistema binario al sistema octal
 * @param bin, num; donde bin es una cadena y num corresponde a un entero 
 * @return num, oct; donde num corresponde a un entero y oct es una cadena
 * @programador: Juárez Herrera Erick Adrián 
 * @ÚltimaModificación: 5 de diciembre de 2021 
 */
char* bin_oct(char *bin)
{
    //Llamada a la función conv_bin_decimal()
    conv_bin_decimal(bin);
}
int bin_oct2(int num)
{
    //Llamada a la función decimal_oct
    decimal_oct(num);
}


/**
 * @brief Funciones que realizan la conversión de un número del sistema octal al sistema binario
 * @param oct, num; donde oct es una cadena y num corresponde a un entero 
 * @return num, bin; donde num corresponde a un entero y bin es una cadena
 */
char* oct_bin(char *oct)
{
    //Llamada a la función oct_decimal()
    oct_decimal(oct);
}
int oct_bin2(int num)
{
    //Llamada a la función conv_decimal_bin()
    conv_decimal_bin(num);
}
