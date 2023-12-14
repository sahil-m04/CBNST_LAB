#include<stdio.h>
#include<math.h>

float findValueAt(float x){
    return exp(x)/(1+x);
}

int main(){
    int n;
    float i,a,b,h,sum = 0;
    printf("Enter the values of a and b\n");
    scanf("%f %f",&a,&b);
    printf("Enter the number of Intervals \n");
    scanf("%d",&n);
    
    h = (b-a)/n;
    sum = findValueAt(a) + findValueAt(b);
    for(i=a+h;i<b;i=i+h){
        sum = sum + 2 * findValueAt(i);
    }
    sum = (h*sum)/2;
    printf("The values of Integral = %f \n",sum);
}