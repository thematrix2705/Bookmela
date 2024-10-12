#include <stdio.h>
#include<math.h>
int main()
{
int range ;
printf("Enter the range : ");
scanf("%d", &range);
for (int i = 2; pow(i,2)<range; i++)
{
    int power = 2;
    while (pow(i,power)<range)
{
    if (pow(i, power) < range)
    {
        printf("%d^%d \t",i,power);
        power++;
    }
    else{
        break;
    }
    
}

}


return 0;
}