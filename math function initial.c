#include<stdio.h>
#include<math.h>
int main (){
printf("the power is %d\n",(int)pow(3,2));//actually it return float

printf("root is %f\n",sqrt(26));//same its also return float

printf("square is %.2f\n",pow(5,3));

int a = 10;

printf("%f\n",log(a));//Log value;

int b  = 1974;

int l = log10(b);// count the number of a number from 0.if you count the total  then plus 1;

printf("%d\n",l);

printf("%X\n",a);// %X decimal to hexadecimal.




int n;

n = 8;

//scanf("%d",&n);

printf("cube root of 8 is %lf\n",cbrt(n));

printf("exponential value is from Higher Math.\n");



printf("the exponential value of %d is %lf\n",4,exp(4)); ///exp() return double type value

printf("round value of %f is %lf\n",5.58,round(5.58));///take into round figure.if value after .

///is more than 4 it return with +1

printf("round value of %f is %lf\n",5.48,round(5.48));///les then 5 so return only 5;

printf("trunc value of 7.6645 is %lf\n",trunc(7.6645)); ///trunc() value removed the floating part

printf("ceil(the next integer value) Like:\n");

printf("ceil value of 90.267 is %lf\n",ceil(90.267)); ///find the next complete number;after 90... is 91

printf("floor function is worked like the past integer number.\n");

printf("floor value of 90.567 is %lf\n",floor(90.567));///ceil is 91 floor is 90;

printf("it works inverse when floor and ceil has negetive value\n");

printf("        FOr Factorial        \n");  ///factorial

printf("factorial of %d is %d",5,(int)tgamma(5+1)); ///it takes n+1 perimeter

return 0;
}
// i use typecast to convert int from float
