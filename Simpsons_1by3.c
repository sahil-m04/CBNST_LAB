#include<stdio.h>
#include<math.h>

float findValueAt(float x){
    return exp(x)/(1+x);
}
int main() {
    int n;
    float i, a , b , h ,sum = 0;
    int position_of_term = 1;
    printf("Enter the value of a and b\n");
    scanf("%f %f",&a,&b);
    printf("Enter the number of Intervals\n");
    scanf("%d",&n);
    
    h=(b-a)/n;
    sum = findValueAt(a) + findValueAt(b);
    for(i=a+h;i<b;i=i+h){
        if(position_of_term%2 == 0){
            sum = sum + 2 * findValueAt(i);
        }
        else{
            sum = sum + 4 * findValueAt(i);
        }
        position_of_term++;
    }
    sum = (h*sum)/3;
    printf("\nValue of the Integral = %f \n",sum);
}