#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaa;
   int _Bbbbbbb;
   int _Ccccccc;
   int _Ttttttt;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%d", &_Bbbbbbb);
   printf("Enter _Ccccccc:");
   scanf("%d", &_Ccccccc);
   if (_Bbbbbbb > _Aaaaaaa) 
{ 
   goto Outofia;
} 
   else{
   _Ttttttt = _Aaaaaaa;
} 
Outofib:
   if ((_Ccccccc > _Bbbbbbb && _Ccccccc > _Aaaaaaa)) 
{ 
   goto Outofic;
} 
   else{
   goto Outofif;
} 
Outofia:
   _Ttttttt = _Bbbbbbb;
   goto Outofib;
Outofic:
   _Ttttttt = _Ccccccc;
   goto Outofif;
Outofif:
   printf("%d\n", _Ttttttt);
   if (((_Aaaaaaa == _Bbbbbbb && _Aaaaaaa == _Ccccccc) && _Bbbbbbb == _Ccccccc)) 
{ 
   printf("%d\n", 1);
} 
   else{
   printf("%d\n", 0);
} 
   if (((_Aaaaaaa < 0 || _Bbbbbbb < 0) || _Ccccccc < 0)) 
{ 
   printf("%d\n", (0 - 1));
} 
   else{
   printf("%d\n", 0);
} 
   if (!(_Aaaaaaa < (_Bbbbbbb + _Ccccccc))) 
{ 
   printf("%d\n", 10);
} 
   else{
   printf("%d\n", 0);
} 
   system("pause");
    return 0;
}
