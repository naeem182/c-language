#include<stdio.h>
#include<math.h>
int main()
{
    float r,diameter,circumference,area;
    float pi=3.1416;
    printf("emter a circle radius r= ");
    scanf("%f",&r);
    diameter=2*r;
    circumference=2*pi*r;
    area=pi*pow(r,2);
    printf("circle diameter is:%.2f\n",diameter);
     printf("circle circumference is:%.2f\n",circumference);
      printf("circle area is:%.2f",area);
      return 0;
}
