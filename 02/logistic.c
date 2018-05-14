#include <stdio.h>
#include <math.h>

int main(void){
  int t;
  double r, x, xx, k;
  r=0.0625;
  x=1.0;
  k=100.0;

  FILE *fp;
  fp=fopen("outputr=0.0625.dat","w");
  fprintf(fp,"%d, %f\n", 0, x);

  for(t=1;t<300;t++){

    xx=x+r*(1-x/k)*x;

    fprintf(fp,"%d, %f\n",  t, xx);
    x=xx;
  }
  fclose(fp);

  return 0;
}
