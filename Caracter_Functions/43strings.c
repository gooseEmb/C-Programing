#include <stdio.h>

/* 
**un string no es nada mas que una secuencia infinita 
de caracteres definidas como

        char[] = "una cadena de texto"
        char[20] = "solo 20 entran"
        char w[20] = {s,o,l,o, ,1,0, ,e,n,t,r,a,n}

Caracter \0: delimita el final de la cadena por mucho de 
que la cadena sea mas larga
Longitud de cadena: para contener una cadena es necesario n+1
posiciones para almacenar la cadena y el caracter \0

operaciones con cadenas: asignar una cadena, concatenar cadenas,
de mayus a minusculas, convertir cadenas a numeros

*****cuando se declara char [5] = "hi" nos crea un vector de 
[0,1,2,3,4] CUENTA EL 0 MAS****
*/

#include <string.h>
#include <math.h>
void stringCopy(char theString[], char tempCpy[]);
int longitud(char theString[]);
int isEmpty(char theString[]);
void concatenarCadenas(char string1[], char string2[]);
int CompararCadenas(char string1[], char string2[]);
int cadenaAentero(char string1[]);
int main(){
    char s[50]; 
    char l[]="hola";
    char t[]="holads";
    char numeros[]="32";
    stringCopy("texto para copiar", s);
    /*PARA MOSTRAR UN STRING SE USA %S*/  
    printf("nom = %s\n", s);
    /*devuelve el size del string*/
    int size=0;
    printf("size is: %d\n", longitud("hoy es el clasico de paceno"));
    /*esta vacia la  cadena*/
    printf("esta: %d\n", isEmpty(""));
    /**concatenar 2 strings*/
    concatenarCadenas(l, " friends");
    printf("%s\n", l);
    printf("%d\n",CompararCadenas(l,t));
    printf("%d",cadenaAentero("85432"));
}

/*copia una cadena */
void stringCopy(char theString[], char tempCpy[]){
    int i = 0;
    while (theString[i] != '\0')
    {
        tempCpy[i] = theString[i];
        i=i+1;
    }    
    tempCpy[i] = '\0';
}

int longitud(char theString[]){
    int count = 0;
    while (theString[count] != '\0')
    {
        count++;
    }
    return count;
}

int isEmpty(char theString[]){
    return theString[0]=='\0'; //ya tiene implicito ?1:0
}

void concatenarCadenas(char string1[], char string2[]){
    int len = 0;
    int j = longitud(string1);
    while (string2[len] != '\0')
    {
        string1[j] = string2[len];
        j++;
        len++;
    }
    string1[j] = '\0'; 
}

int CompararCadenas(char string1[], char string2[]){
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0' &&string1[i] == string2[i])
    {
            i=i+1; 
    }
    return(string1[i]-string2[i]);
    //si me da 32 es igual por que \0-\0 = space 
    //si me da cualquier otro numero es distinto
}
/*se necesito la libreria math.h para usar pow*/
int cadenaAentero(char string1[]){
    int valorEnNum = 0;
    for (int i = 0; i < longitud(string1); i++)
    {
        valorEnNum = valorEnNum + pow(10,(longitud(string1)-i-1))*((int)string1[i]-48);
    }
    return valorEnNum;    
}