#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

float areaOfCircle(float radius){
float answer = ((radius * radius) * M_PI);
return answer;

}

int main(){
char input[256];
char num1;
char num2;
printf("What is the radius of your circle?\n");
fgets(input, 256, stdin);
sscanf(input,"%s %s",&num1,&num2);
float ans1 = areaOfCircle(atof(&num1));
float ans2 = areaOfCircle(atof(&num2));
printf("The area of the circle is %f\n", ans1);
printf("The area of the circle is %f\n", ans2);
}
