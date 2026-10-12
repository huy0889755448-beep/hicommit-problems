#include <stdio.h>
   
int main() {
    int khoang_cach,
gia_tri_don_hang;
  
    scanf ("%d%d", &khoang_cach,
&gia_tri_don_hang);
  
    if (khoang_cach <= 0 ||
gia_tri_don_hang < 0)
       printf ("INVALID");
    else if (gia_tri_don_hang >=
500000 && khoang_cach <= 15)
       printf("0");
    else if (khoang_cach <= 5)
       printf("15000");
    else if (khoang_cach <= 15)
       printf("25000");
    else
       printf("40000");
return 0;