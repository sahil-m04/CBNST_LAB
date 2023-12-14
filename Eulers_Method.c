#include<stdio.h>
#include<math.h>
float f(float x,float y){
    return x+y;
}

int main() {
    float x0,y0,x,y,h,xn,k;
    printf("\n Enter x0,y0,xn,h: ");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n x\t y\n");
    while(x<=xn){
        k=h*f(x,y);
        y+=k;
        x+=h;
        printf("%0.3f\t %0.3f\n",x,y);
    }
}