#include <stdio.h>
void main()
{
    int AQI;
    printf("Enter AQI value: ");
    scanf("%d",&AQI);
    if(AQI<=50)
    {
        printf("Air Quality is: GOOD");
    }
    else if(AQI>50 && AQI<=100)
    {
        printf("Air Quality is: MODERATE");
    }
    else if(AQI>100 && AQI<=150)
    {
        printf("Air Quality is: POOR");
    }
    else if(AQI>150 && AQI<=200)
    {
        printf("Air Quality is: UNHEALTHY");
    }
    else if(AQI>200 && AQI<=300)
    {
        printf("Air Quality is: SEVERE");
    }
    else
    {
        printf("Air Quality is: HAZARDOUS");
    }
}
