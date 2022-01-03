#include"funciones.h" //Incluye a las funciones definidas en el archivo especificado
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//Funcion Principal
int main(){
    fflush(stdin);
    //Portada
    printf("\tUniversidad Nacional Autonoma de Mexico (UNAM)\n");
    printf("\t\tFacultad de Ingenieria\n");
    printf("\tProyecto 1 Conversion de numeros a distintas\n");
    printf("\t\tMateria: Fundamentos de programacion (1122)\n");
    printf("\t\tProfesor: Mercado Martinez Adrian Ulises\n");
    printf("\t\tGrupo: 07\n");
    printf("\t\tBrigada 1\n");
    printf("\tIntegrantes:\n");
    printf("\t-Arellanes Conde Esteban.\n");
    printf("\t*Numero de lista: 28.\n");
    printf("\t-Rufino López María Elena.\n");
    printf("\t*Numero de lista: 46.\n");
    printf("\t-Soriano Barrera María Elena.\n");
    printf("\t-López López Axel Dion.\n");
    printf("\t\t\tSemestre 2022-1\n");
    printf("\t\t\t:) \n");

    //Variables
    int elegir=0, x=0, num=0;
    char b[]="";
    char o[]="";
    char h[]="";

    char *bin=NULL;
    char *bin2=NULL;
    char *oct=NULL;
    char *oct2=NULL;
    char *hexa=NULL;
    char *hexa2=NULL;

    //Menu de seleccion
    printf("Conversion de numeros entre sistemas numericos. \n");
    printf("Elija una opcion: \n");
    printf("1. Convertir de sistema Binario a Decimal.\n");
    printf("2. Convertir de sistema Decimal a Binario.\n");
    printf("3. Convertir de sistema Hexadecimal a Decimal.\n");
    printf("4. Convertir de sistema Decimal a Hexadecimal.\n");
    printf("5. Convertir de sistema Octal a Decimal.\n");
    printf("6. Convertir de sistema Decimal a Octal.\n");
    printf("7. Convertir de sistema Binario a Hexadecimal.\n");
    printf("8. Convertir de sistema Hexadecimal a Binario.\n");
    printf("9. Convertir de sistema Binario a Octal.\n");
    printf("10. Convertir de sistema Octal a Binario.\n");
    do{
        scanf("%d", &elegir);
        if(elegir > 10 && elegir < 1){
            printf("Eleccion invalida, digite un numero entre 1 y 10.\n");
        }
    }while(elegir > 10 && elegir < 1);//Este ciclo previene que elegir tome valores incorrectos
        //Eleccion de conversion
        switch(elegir){
        case 1:
            printf("Ingrese su numero en sistema Binario: \n");
            scanf("%s",&b);
            num = conv_bin_decimal(b);
            printf("Su equivalente en forma Decimal es: %d\n", num);
            num=0;
            return 0;
        break;

        case 2:
            printf("Ingrese su numero en sistema Decimal: \n");
            scanf("%d",&num);
            bin = conv_decimal_bin(num);
            printf("Conversion a sistema Binario: %s\n",bin);
            free (bin);
            bin = NULL;
            return 0;
        break;

        case 3:
            printf("Ingrese su numero en sistema Hexadecimal: \n");
            scanf("%s",&h);
            num = hexa_decimal(h);
            printf("Conversion a sistema Decimal: %d\n", num);
            num=0;
            return 0;
        break;
        case 4:
            printf("Ingrese su numero en sistema Decimal: \n");
            scanf("%d",&num);
            hexa = decimal_hexa(num);
            printf("Conversion a sistema Hexadecimal: %s\n",hexa);
            free (hexa);
            hexa = NULL;
            return 0; 
        break;
        case 5:
            printf("Ingrese su numero en sistema Octal: \n");
            scanf("%s",&o);
            num = oct_decimal(o);
            printf("Conversion a sistema Decimal: %d\n", num);
            num=0;
            return 0;
        break;
        case 6:
            printf("Ingrese su numero en sistema Decimal: \n");
            scanf("%d",&num);
            oct = decimal_oct(num);
            printf("Conversion a sistema Octal: %s\n",oct);
            free (oct);
            oct = NULL;
            return 0; 
        break;
        case 7:
            fflush(stdin);
            printf("Ingrese su numero en sistema Binario: \n");
            scanf("%s",& b);
            bin= b;
            hexa = bin_hexa(bin);
            printf("Conversion a sistema Hexadecimal: %s\n",hexa);
            free (hexa);
            hexa = NULL;
            return 0; 
        break;
        case 8:
            fflush(stdin);
            printf("Ingrese su numero en sistema Hexadecimal:\n");
            scanf("%s",&h);
            hexa = h;
            hexa = hexa_bin(hexa);
            hexa2 = hexa_bin2(hexa);
            printf("Conversion a sistema Binario: %s\n", hexa2);
            free(hexa);
            free(hexa2);
            hexa = NULL;
            hexa2=NULL;
            return 0;
        break;

        case 9:
            fflush(stdin);
            printf("Ingrese su numero en sistema Binario: \n");
            scanf("%s",b);
            bin = b;
            bin = bin_oct(bin);
            bin2 = bin_oct2(bin);
            printf("Conversion a sistema Octal: %s\n", bin2);
            free(bin);
            free(bin2);
            bin = NULL;
            bin2=NULL;
            return 0;
        break;

        case 10:
            fflush(stdin);
            printf("Ingrese su numero en sistema Octal: \n");
            scanf("%s", o);
            oct = o;
            oct = oct_bin(oct);
            oct2 = oct_bin2(oct);
            printf("Conversion a sistema Binario: %s\n", oct2);
            free(oct);
            free(oct2);
            oct = NULL;
            oct2=NULL;
            return 0;
        break;
        default:
            printf("ERROR.\n");
        break;
    }
    return 0;
}