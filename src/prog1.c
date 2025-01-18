#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _Aaaaaaa, _Bbbbbbb, _Xxxxxxx, _Yyyyyyy;
   printf("Enter _Aaaaaaa:");
   scanf("%hd", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%hd", &_Bbbbbbb);
   printf("%d\n", _Aaaaaaa + _Bbbbbbb);
   printf("%d\n", _Aaaaaaa - _Bbbbbbb);
   printf("%d\n", _Aaaaaaa * _Bbbbbbb);
   printf("%d\n", _Aaaaaaa / _Bbbbbbb);
   printf("%d\n", _Aaaaaaa % _Bbbbbbb);
   _Xxxxxxx = (_Aaaaaaa - _Bbbbbbb) * 10 + (_Aaaaaaa + _Bbbbbbb) / 10;
   _Yyyyyyy = _Xxxxxxx + _Xxxxxxx % 10;
   printf("%d\n", _Xxxxxxx);
   printf("%d\n", _Yyyyyyy);
   system("pause");
    return 0;
}
