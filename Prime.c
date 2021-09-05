#include<stdio.h>
checkPrime (int num, int p){
if(p==1)
return 1; 
else{
if(num%p==0) 
return 0;
else 
return checkPrime(num,p-1);
}
}

int main() {
int num,prime; 
printf("Enter a number\n");
scanf("%d",&num);
if(num=0 || num==1)
printf("%d is not a prime number",num);
else{
prime=checkPrime(num,num/2);
if(prime==1)
printf("%d is a prime number",num);
else printf("%d is a not prime number",num);
}
return 0;
}
