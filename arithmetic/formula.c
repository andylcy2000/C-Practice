#include<stdio.h>
#include<stdint.h>
#include<math.h>

int main () {
    
    double a,b,c = 0.0; 
    printf("PLease input 3 numbers:");
    scanf("%lf %lf %lf",&a,&b,&c);
    double result1 = ((-b) + sqrt(pow(b,2.0)-4*a*c ))/(2*a);
    double result2 = ((-b) - sqrt(pow(b,2.0)-4*a*c ))/(2*a);    
    printf("\n result 1: %lf\n", result1);
    printf("result 2: %lf\n", result2);
    return 0;
}