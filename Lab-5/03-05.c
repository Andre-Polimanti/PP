#include <stdio.h>

int main()
{
    char str[100];
    int soma=0;
    printf("Descubra quantas vogais existem na string que inserir.\n");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        str[i]=str[i]+32;
    }
    printf("%s",str);
    return 0;
}