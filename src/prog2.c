#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _Aaaaaaa, _Bbbbbbb, _Ccccccc;
   printf("Enter _Aaaaaaa:");
   scanf("%hd", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%hd", &_Bbbbbbb);
   printf("Enter _Ccccccc:");
   scanf("%hd", &_Ccccccc);
   if ((_Aaaaaaa > _Bbbbbbb))
   {
   if ((_Aaaaaaa > _Ccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _Ccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", _Aaaaaaa);
   goto Outofif;
   }
   }
   if ((_Bbbbbbb < _Ccccccc))
   {
   printf("%d\n", _Ccccccc);
   }
   else
   {
   printf("%d\n", _Bbbbbbb);
   }
Outofif:
   if (((_Aaaaaaa == _Bbbbbbb) && (_Aaaaaaa == _Ccccccc) && (_Bbbbbbb == _Ccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_Aaaaaaa < 0) || (_Bbbbbbb < 0) || (_Ccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_Aaaaaaa < (_Bbbbbbb + _Ccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
