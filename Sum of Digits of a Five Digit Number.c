#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
scanf("%d", &n);
//Complete the code to calculate the sum of the five digits on n.
int i=0,rem;
while(n!=0){
    rem=n%10;
    i=i+rem;
    n=n/10;   
}
printf("%d",i);
return 0;}
