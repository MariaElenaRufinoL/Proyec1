#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

//__________________PROTOTIPOS DE LAS FUNCIONES____________________

//__________________FUNCIONES CON SISTEMA DECIMAL__________________
int conv_bin_decimal(char *bin);
char* conv_decimal_bin(int num);
int hexa_decimal(char *hexa);
char* decimal_hexa(int num);
int oct_decimal(char *oct);
char* decimal_oct(int num);
//___________________FUNCIONES CON SISTEMA BINARIO__________________
char* bin_hexa(char *bin);
char* hexa_bin(char *hexa);
int hexa_bin2(int num);
char* bin_oct(char *bin);
char* oct_bin(char *oct);
int bin_oct2(int num);

#endif  

