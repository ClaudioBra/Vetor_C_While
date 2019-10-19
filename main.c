#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num[100];
    int count=0;
    int total;

    do{

    printf("Entre com um número (-5 p/ terminar): ");
    scanf("%d", &num[count]);
    count++;
    } while (num[count - 1] != -5);

    total = count-1;

    printf("\n\n\n\t Os números que você digitou foram:\n\n");
    for(count=0; count<total;count++)
    printf(" %d", num[count]);
    printf("\n");

    return 0;
}
