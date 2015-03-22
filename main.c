#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){ 
int circles,arrows;
int radius[circles];
int coordinates[arrows][4];
/*We scan in the number of circles.*/
scanf("%d", &circles);
/*We scan in the radius of each circle.*/
for(int i=0;i<circles;i++){
scanf("%d", &radius[i]);}
/*We scan in the number of arrows.*/
scanf("%d", &arrows);
/*We scan in the endpoint coordinates of each arrow.*/
for(int j=0;j<arrows;j++){
for(int k=0;k<4;k++){
scanf("%d %d %d %d", coordinates[j][k]);}}
return 0;}


