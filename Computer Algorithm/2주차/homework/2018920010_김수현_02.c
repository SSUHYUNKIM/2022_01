// ��ǻ�;˰��� 01�й� ��ǻ�Ͱ��к� 2018920010 �����
// CPU spec: intel CORE i7
// 2^61-1 �� �Ҽ��Դϴ�.
// ����ð��� 5�� ������ 12.976, 13.287, 12.347, 12.083, 12.289�� 
// ��� 12.596�ʰ� �ɷȽ��ϴ�.

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
  printf("���α׷� ���� �ð� :%lf\n", (end - start));
  return 0;
}