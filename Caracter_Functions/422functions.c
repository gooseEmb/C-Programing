#include <stdio.h>

int isDigit(char c);
int isCharacter(char c);
int isUpperCase(char c);
int isLowerCase(char c);
char toLower(char c);

int main()
{
    char value = 'A';
    printf("%d \n",isDigit(value));
    printf("%c",toLower(value));
    return 0;
}

/*
determina si es un caracter o es un numero
*/
int isDigit(char c){
    return c>='0' && c<='9';
}
/*is a caracter determina if a caracter mayus  */
int isCharacter(char c){
    return c>= 'A' && c<='Z' || c>='a' && c<='z';
}
/*determina si una letra es mayuscula*/

int isUpperCase(char c){
    return c>='A' && c<='Z';
}

/*determina si es minuscula*/

int isLowerCase(char c){
    return c>='a' && c<='z';
}

/*convert upper to lower*/

char toLower(char c){
    return isUpperCase(c)?c-'A'+'a':c;
}