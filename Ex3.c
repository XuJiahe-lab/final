#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int input(char *pn);
int main(int argc, char *argv[])
{
    int a[MAX], min;
    int i, k = 0;
    if(argc == 1){
        printf("The program needs at least one integer parameter to run");
    }
    else{
    while(k < 100){
        if(argv[k + 1] == 0){
            break;
        }
        else if(input (argv[k + 1]) == 1){
        a[k] = atof(argv[k + 1]);
        k++;
        }
        else if(input (argv[k + 1]) == 0){
            goto End;
        }
    }
     min = a[0];
    for (i = 0; i < k; i++)
    {
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("Min parameter is %d", min);
    return 0;



End: 
printf("The parameter has to be an integer format!");
    }
}

int input(char s[])
{
    int k, i;
    k = strlen(s);
    for (i = 0; i < k && isdigit(s[i]); i++)
        ;
    if (i == k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
