#include <stdio.h>
#include <math.h>

int main(void){
  int i;
  double x0,xr,x,xx,r,K;
  double dt;

  x0=10.0;
  x=x0;
  xr=x0;
  K=300;
  r=1.2;
  dt=0.001;
  FILE *fp;
  fp=fopen("3-7.0.001dat","w");
  fprintf(fp,"%f, %f, %f\n",0.0,xr,x);

  for(i=1;i<1000;i++){
    xr=K/(1+(K/x0-1)*exp(-r*dt*i));

    xx=x+dt*r*(1-x/K)*x;
    x=xx;

    fprintf(fp,"%f, %f, %f\n",dt*i,xr,x);
  }

  fclose(fp);
  return 0;
 }
