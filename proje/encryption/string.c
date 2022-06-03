#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
srand((unsigned)time(NULL)*127);

char str[1000];
    scanf("%s",&str);
int len=strlen(str);
    //ascii code unu kullanarak yap
    
    for(int i=0;i<=len;i++){
    switch (str[i])
    {
    //switch-case içinde switch-case kullan, aralık kullan
    case 114 :
        printf("%c",114);
    break ;
    
    case 82:
        printf("%c",82);
    break ;

    break;

    case 97 :
        printf("%c",97);
    break;

    case 65:
        printf("%c",65);
    break;

    case 100 :
        printf("%c",100);

    break ;

    case 68:
        printf("%c",68);
    break;
    
        
    }
    }
}