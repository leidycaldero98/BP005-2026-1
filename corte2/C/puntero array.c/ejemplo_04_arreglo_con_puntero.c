#include <stdio.h> 
int main() { 
int datos[5] = {8, 3, 15, 6, 10};
int*p = datos; 
int i; 
for(i=0;i<5;i++){ 
printf("Elemento %d= %d\n",i,*(p+i)); 
} 
return0; 
}
