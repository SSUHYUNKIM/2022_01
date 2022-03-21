#include <stdio.h>
#include <math.h>

int main(){
long long n = 219882720678700;
long long i;
while (n * log10(n) <= 3153600000000000 ){
  n += 1;
  printf("%lld\n", n);
}
printf("nlog(n) : %lld", n - 1); 
return 0;
}