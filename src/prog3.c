#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _Aaaaaaa, _Ddddddd, _Bbbbbbb, _Xxxxxxx, _Ccccccc, _Yyyyyyy;
   printf("Enter _Aaaaaaa:");
   scanf("%hd", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%hd", &_Bbbbbbb);
   for (_Ddddddd = _Aaaaaaa; _Bbbbbbb >= _Ddddddd; _Ddddddd++)
   {
   printf("%d\n", _Ddddddd * _Ddddddd);
   }
   for (_Ddddddd = _Bbbbbbb; _Aaaaaaa <= _Ddddddd; _Ddddddd--)
   {
   printf("%d\n", _Ddddddd * _Ddddddd);
   }
   _Xxxxxxx = 0;
   _Ccccccc = 0;
   while (_Ccccccc < _Aaaaaaa)
   {
   _Yyyyyyy = 0;
   while (_Yyyyyyy < _Bbbbbbb)
   {
   _Xxxxxxx = _Xxxxxxx + 1;
   _Yyyyyyy = _Yyyyyyy + 1;
   }
   _Ccccccc = _Ccccccc + 1;
   }
   printf("%d\n", _Xxxxxxx);
   _Xxxxxxx = 0;
   _Ccccccc = 1;
   do 
   { 
    _Yyyyyyy = 1;
   do 
   { 
    _Xxxxxxx = _Xxxxxxx + 1;
   _Yyyyyyy = _Yyyyyyy + 1;
 
   }  while (!(_Yyyyyyy > _Bbbbbbb));
   _Ccccccc = _Ccccccc + 1;
 
   }  while (!(_Ccccccc > _Aaaaaaa));
   printf("%d\n", _Xxxxxxx);
   system("pause");
    return 0;
}
