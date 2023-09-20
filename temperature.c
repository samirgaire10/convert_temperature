#include<stdio.h>
int Celsius_to_Fahrenheit(int);
int Fahrenheit_to_Celsius(int);

int main(void)
{
    int tem ;
    char yes ;
    printf("Convert celsius to fahrenheit | or |fahrenheit to celsius::\n");
    printf("Do you want to Convert celsius to fahrenheit y for yes |or|  n for No ::");
    scanf("%c",&yes);

    if(yes == 'y')
    {
            printf("Enter celsius::");
            scanf("%d",&tem);
            Celsius_to_Fahrenheit(tem) ;
    }

    else if(yes == 'n')
    {
            printf("Enter fahrenheit::");
            scanf("%d",&tem);
            Fahrenheit_to_Celsius(tem) ;

    }

return 0;
}


int Fahrenheit_to_Celsius(int tempature)
{
    int celsius ;
    printf("converting Fahrenheit to Celsius....\n");
    celsius = (tempature - 32 ) * 0.55555 ;
    printf("%d celsius = %d fahrenheit ",tempature , celsius);
}

int Celsius_to_Fahrenheit(int tempature)
{
    int fahrenheit ;
    printf("converting Celsius to Fahrenheit....\n");
    fahrenheit = (tempature * 1.8 ) + 32 ;
    printf("%d celsius = %d fahrenheit ",tempature , fahrenheit);
}
