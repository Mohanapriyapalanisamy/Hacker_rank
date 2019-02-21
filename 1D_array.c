#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n,i=0,sum=0;
    scanf("%d",&n);
    /*dynamic array creation and arr points to the base address of the array */
    int* arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    printf("%d",sum);
    return 0;
}

