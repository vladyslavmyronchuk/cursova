#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaa;
   int _Bbbbbbb;
   int _Xxxxxxx;
   int _Yyyyyyy;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%d", &_Bbbbbbb);
   printf("%d\n", (_Aaaaaaa + _Bbbbbbb));
   printf("%d\n", (_Aaaaaaa - _Bbbbbbb));
   printf("%d\n", (_Aaaaaaa * _Bbbbbbb));
   printf("%d\n", (_Aaaaaaa / _Bbbbbbb));
   printf("%d\n", (_Aaaaaaa % _Bbbbbbb));
   _Xxxxxxx = (((_Aaaaaaa - _Bbbbbbb) * 10) + ((_Aaaaaaa + _Bbbbbbb) / 10));
   _Yyyyyyy = (_Xxxxxxx + (_Xxxxxxx % 10));
   printf("%d\n", _Xxxxxxx);
   printf("%d\n", _Yyyyyyy);
   system("pause");
    return 0;
}
