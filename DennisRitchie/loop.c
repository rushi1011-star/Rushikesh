#include<stdio.h>

/*  int main(){
    int i,n;
    printf("enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       int sum=0;
       for(int j=1;j<=i;j++){
           sum+=j;
       }
       printf("sum of %d is %d\n",i,sum);
    }
    return 0;
}
*/ 

int main(){
   int num[20],even=0,odd=0;
   printf("enter your numbers:");
   for(int i=0;i<=19;i++){
      scanf("%d",&num[i]);
   }
   for(int i=0;i<=19;i++){
      if(num[i]%2==0){
         even++;

      }
      else{
         odd++;
      }
   }
   printf("even number are %d\n",even);
   printf("odd number is %d\n",odd);
   return 0;
}