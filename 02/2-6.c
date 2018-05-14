#include <stdio.H>

int main(void){
  FILE *fp;
  fp=fopen("helllo.dat","w");
  fprintf(fp, "Hello, World!");
  fclose(fp);
  return 0;
}
