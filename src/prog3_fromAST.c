#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaa;
   int _Ddddddd;
   int _Bbbbbbb;
   int _Xxxxxxx;
   int _Ccccccc;
   int _Yyyyyyy;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%d", &_Bbbbbbb);
   for (int _Ddddddd = _Aaaaaaa; _Ddddddd <= _Bbbbbbb; _Ddddddd++)
   printf("%d\n", (_Ddddddd * _Ddddddd));
   for (int _Ddddddd = _Bbbbbbb; _Ddddddd <= _Aaaaaaa; _Ddddddd++)
   printf("%d\n", (_Ddddddd * _Ddddddd));
   _Xxxxxxx = 0;
   _Ccccccc = 0;
   while (_Ccccccc < _Aaaaaaa)
   {
   {
   _Yyyyyyy = 0;
   while (_Yyyyyyy < _Bbbbbbb)
   {
   {
   _Xxxxxxx = (_Xxxxxxx + 1);
   _Yyyyyyy = (_Yyyyyyy + 1);
   }
   }
   _Ccccccc = (_Ccccccc + 1);
   }
   }
   printf("%d\n", _Xxxxxxx);
   _Xxxxxxx = 0;
   _Ccccccc = 1;
   do
   {
   _Yyyyyyy = 1;
   do
   {
   _Xxxxxxx = (_Xxxxxxx + 1);
   _Yyyyyyy = (_Yyyyyyy + 1);
   }
   while (!(_Yyyyyyy > _Bbbbbbb));
   _Ccccccc = (_Ccccccc + 1);
   }
   while (!(_Ccccccc > _Aaaaaaa));
   printf("%d\n", _Xxxxxxx);
   system("pause");
    return 0;
}
