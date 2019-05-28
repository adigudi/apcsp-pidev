#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius){
float answer = ((radius * radius) * M_PI);
return answer;

}

int main(){
float num;
num = areaOfCircle(2.5);
printf("The area of the circle is %f\n", num);
}




