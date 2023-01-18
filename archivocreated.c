#include <stdio.h>

int main(){
    FILE *archivo=NULL;
    FILE *archivo1=NULL;
    int numeros; 

    archivo=fopen("vector.txt","r");
    archivo1=fopen("archivodiegoc.txt", "w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int cont=1;
    while(!feof(archivo)){
        fscanf(archivo, "%d", &numeros);
        if (numeros%10 == 0){
            fprintf(archivo1,"Buen comienzo \n");
        }else{
            fprintf(archivo1,"%d \n", numeros);
        }
        cont++;
    }

    fclose(archivo);
    fclose(archivo1);
    return 0;
}