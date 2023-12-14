#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter the number of Terms \n");
    scanf("%d",&n);
    float X[n],Y[n],x,sum = 0, term;
    int i,j;
    printf("Enter Value of X\n");
    for(i=0;i<n;i++){
        scanf("%f",&X[i]);
    }
    printf("Enter the Values of Y\n");
    for(i=0;i<n;i++){
        scanf("%f",&Y[i]);
    }
    printf("Enter the values of x for which you want Y\n");
    scanf("%f",&x);
    for(i = 0 ; i < n ; i++){
        term = 1;
        for(j = 0 ; j < n ; j++){
            if(i!=j)
            term = term * ( ( x - X[j] ) / ( X[i] - X[j] ) );
        }
        sum = sum + term * Y[i];
    }
    printf("\n Value at X = %g is = %f\n",x,sum);
}