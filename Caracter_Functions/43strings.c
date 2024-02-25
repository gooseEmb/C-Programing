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
void stringCopy(char theString[], char tempCpy[]);
int main(){
    char s[50]; 
    stringCopy("texto para copiar", s);
    /*PARA MOSTRAR UN STRING SE USA %S*/  
    printf("nom = %s", s);
    return 0;
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