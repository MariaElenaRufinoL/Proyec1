#include "funciones.h"
#include <string.h>
#include<stdbool.h>
#include <math.h>
#include <stdlib.h> 

//Funciones con sistema decimal
/**
 * @brief Función que realiza la conversión de un número bin a un número decimal
 * @param bin que es una cadena
 * @return num que corresponde a un entero
 */
    
int conv_bin_decimal(char *bin){
    int num = 0, poww = 0;
    for(int i = strlen(bin)-1; i>=0; i--){
        if(bin[i]=='1') 
            num= num + pow(2, poww); //pow(base,potencia);
        poww = poww + 1;
    }
    return num;
}


/**
 * @brief Función que realiza la conversión de un número decimal a un número bin
 * @param num que corresponde a un entero
 * @return bin que es una cadena
 */
char* conv_decimal_bin(int num){
    int t=0, i=0, j=0;
    
    char *a=NULL, *bin=NULL;
    a = (char*)malloc(sizeof(char));
    strcpy(a, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(a, "1");
        else strcat(a, "0");        
    }while(num!=1 && num!=0);
    
    if(num== 1) strcat(a, "1");

    bin = (char*)malloc(strlen(a)*sizeof(char));
    for(i=strlen(a)-1, j=0; i >=0; i--, j++){
        bin[j] = a[i];
    }
    free(a);
    a = NULL;
    return bin;
}


/**
 * @brief Función que realiza la conversión de un número hexa a un número decimal
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
 * @brief Función que realiza la conversión de un número decimal a un número hexa
 * @param num que corresponde a un entero
 * @return hexa que es una cadena
 */
char* decimal_hexa(int num){
int t=0, i=0, j=0;
    char *a=NULL, *hexa=NULL;
    a = (char*)malloc(sizeof(char));//Devuelve un apuntador de tamaño de la memoria que ocupa un char
    strcpy(a, "");

    do{
        t= num % 16;        
        num = (int)(num/16);
        switch(t){
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
    hexa = (char*)malloc(strlen(a)*sizeof(char));//Reserva memoria
    for(i=strlen(a)-1, j=0; i >=0; i--, j++){
        hexa[j] = a[i];    
    }
    free(a);
    a = NULL;
    return hexa;
}  


/**
 * @brief Función que realiza la conversión de un número oct a un número decimal
 * @param oct que es una cadena

@return num que corresponde a un 
*/

int oct_decimal(char *oct){
int num = 0, poww = 0;
    for(int i = strlen(oct)-1; i>=0; i--){
        switch(oct[i]){
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
        poww = poww + 1; //Para que vaya aumentando la powwencia
    }
    return num;
}


/**
 * @brief Fución que realiza la conversión de un número decimal a un número  oct
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


//--------------------FUNCIONES QUE HACEN USO DE LAS ANTERIORMENTE PROGRAMADAS---------------------

/**
 * @brief Función que realiza la conversión de un número bin a un número hexa
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


/**
 * @brief Funciones que realizan la conversión de un número hexa a un número bin
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
 * @brief Funciones que realizan la conversión de un número bin a un número oct
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
 * @brief Funciones que realizan la conversión de un número oct a un numero bin
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
