#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    printf("%d\t",a+b);
    printf("%d\n",a-b);
    scanf("%f %f",&c,&d);
    printf("%.1f\t",c+d);
    printf("%.1f\n",c-d);


    return 0;
}
