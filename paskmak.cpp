#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   printf("Enter the no of Elements\n");
   scanf("%d",&n);
   int *arr = (int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   int a,b;
   printf("Enter the Lower Bound and the Upper Bound\n");
   scanf("%d",&a);
   scanf("%d",&b);
   int count = 0;
   for(int i=0;i<n;i++){
      if(arr[i]>=a && arr[i]<=b)
         count++;
   }
   printf("The no of elements in between upper bound and the lower bound is %d \n",count);
   printf("The elements - ");
   for(int i=0;i<n;i++){
      if(arr[i]>=a && arr[i]<=b)
         printf("%d ",arr[i]);
   }
   return 0;
}