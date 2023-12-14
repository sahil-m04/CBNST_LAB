#include<stdio.h>
#include<math.h>

float findValueAt(float x){
    return exp(x)/(1+x);
}
int main(){
    int n;
    float i, a, b, sum = 0, h;
    int position_of_term = 1;
    printf("Enter the value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("enter no. of intervals\n");
    scanf("%d",&n);

    h = (b-a)/n;
    sum = findValueAt(a)+findValueAt(b);
    for(i=a+h;i<b;i=i+h){
        if(position_of_term % 3 == 0){
            sum = sum + 2 * findValueAt(i);
        }
        else{
            sum = sum + 3 * findValueAt(i);
        }
        position_of_term++;
    }
    sum=(3*h)/8*sum;
    printf("\n Value of the Integral = %f", sum);
    printf("\n");
}