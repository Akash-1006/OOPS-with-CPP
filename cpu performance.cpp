#include <stdio.h>

int main() 
{
  float cr;
  int p,p1,i;
  float cpu[5];
  float cpi,ct,max;
  int n=1000;
  for(i=0;i<=4;i++)
  {
      cpu[5]=0;
  }
  printf("\nEnter the number of processors:");
  scanf("%d",&p);
  p1=p;
  for(i=0;i<p;i++)
{
printf("\n\nEnter the Cycles per Instrcution of processor %d:",i+1);
  scanf("%f",&cpi);
  printf("\nEnter the clockrate in GHz:");
  scanf("%f",&cr);
  ct=1000*cpi/cr;
  printf("The CPU time is: %f",ct);
  cpu[i]=ct;
}
max=cpu[0];
for(i=0;i<p1;i++)
{
    if(cpu[i]<=max)
    max=cpu[i];
}
printf("\n\n\n\nThe processor has lowest Execution time is: %f ", max);
    return 0;
}

