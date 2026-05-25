#include<stdio.h>
void mostrarArreglo(int*datos, intn){

int i;

if(datos == NULL){
printf("Elarreglonoesvalido.\n");
return;
}
for (i =0;i<n;i++){
printf("%d",datos[i]);
}
printf("\n");
}
intmain() {

intdatos[5]={8,3,15,6,10};

mostrarArreglo(datos,5);
return 0;
}
