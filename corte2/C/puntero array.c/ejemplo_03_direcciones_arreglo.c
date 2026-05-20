#include<stdio.h> 
intmain(){ 
int datos[5]={8,3,15,6,10}; 
int i; 
for(i=0;i<5;i++){ 
printf("datos[%d]= %d,direccion= %p\n", 
i, datos[i], (void*)&datos[i]); } 
return0; }
