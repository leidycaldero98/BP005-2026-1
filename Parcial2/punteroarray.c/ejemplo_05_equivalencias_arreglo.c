#include <stdio.h> 
int main() { 
int datos[3] = {10, 20, 30}; 
int *p = datos;  
printf("datos[1] = %d\n", datos[1]); 
printf("*(datos + 1) = %d\n", *(datos + 1)); 
printf("*(p + 1) = %d\n", *(p + 1)); 
printf("p[1] = %d\n", p[1]);
return 0; 
}
