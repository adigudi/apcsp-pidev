#include <stdio.h>
#include <math.h>

float calculateArea(float radius){
float answer = ((radius * radius) * M_PI);
return answer;

}

int main(){
float num;
num = calculateArea(2.5);
printf("The area of the circle is %f\n", num);
}




