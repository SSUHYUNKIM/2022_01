// 컴퓨터알고리즘 01분반 컴퓨터과학부 2018920010 김수현
// CPU spec: intel CORE i7
// 2^61-1 은 소수입니다.
// 실행시간은 5번 실행결과 12.976, 13.287, 12.347, 12.083, 12.289로 
// 평균 12.596초가 걸렸습니다.

#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
  long long i;
  long long num = pow(2, 61);
  num -= 1;
  double start, end;
  start = (double)clock() / CLOCKS_PER_SEC;

  for (i = 2; i * i < num; i++)
  {
    if (num % i == 0){
      printf("%lld", i);
      break;
    } 
  }
  end = (double)clock() / CLOCKS_PER_SEC;
  printf("프로그램 수행 시간 :%lf\n", (end - start));
  return 0;
}