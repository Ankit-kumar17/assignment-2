#include <stdio.h>

int main()
{
    



    float temp;
    printf("enter a temperature");
    scanf("%f",&temp);
    if(temp >= 35.0){
        printf("temp is very hot");
    }
    else if(temp>=25.0)
    {
        printf("temp is warm and sunny");
    }
    else{
        printf("temp is cold");
    }
    return 0;
}
 