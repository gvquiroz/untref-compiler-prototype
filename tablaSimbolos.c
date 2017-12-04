#include <stdio.h>
#include <string.h>

typedef struct variable {
  char nombre[255];
  char tipo;
} Variable;

typedef struct tabla {
  Variable * variables[50];
} Tabla;

Tabla tablaDeSimbolos;

/*Definicion de funciones*/
void crear();
int insertar(char nombre[255],char tipo);
char getTipo(char nombre[255]);
int existe(char nombre[255]);
void imprimir();

/*Implementacion de funciones*/

/* Crea una tabla de signos y reserva espacio en memoria*/
void crear(){
      printf("%s\n", "Consola: creando Tabla de Simbolos");
      int i=0;
      for (i; i<50; i++){
        tablaDeSimbolos.variables[i] = NULL;
      }
}

int insertar(char nombre[255],char tipo){

     if (existe(nombre)==0){

             Variable * temp;
             temp = malloc(sizeof(Variable));
             strcpy(temp->nombre,nombre);
             temp->tipo = tipo;

             int i = 0;
             for (i; i<50; i++){

             if (tablaDeSimbolos.variables[i] == NULL){

                 tablaDeSimbolos.variables[i] = temp;
                 return 1;
             }
         }
     }

     return 0;
}

char getTipo(char nombre[255]){

     if (existe(nombre)==1){

        int i=0;

        for (i; i<50; i++){

           if (tablaDeSimbolos.variables[i]!=NULL && strcmp(tablaDeSimbolos.variables[i]->nombre, nombre)==0){

             return tablaDeSimbolos.variables[i]->tipo;

            }
        }
     }

     return 'u';
}

int existe(char nombre[255]){

       int i=0;

       for (i; i<50; i++){

         if (tablaDeSimbolos.variables[i]!=NULL){

             if (strcmp(tablaDeSimbolos.variables[i]->nombre, nombre)==0){

               return 1;

               }
         }
       }

       return 0;
}

void imprimir(){

	 printf("Imprimiendo tabla de simbolos \n \n");
     int i=0;
     for (i;i<50;i++){

         if (tablaDeSimbolos.variables[i]!=NULL){
            printf("\t posicion %d | nombre: %s | tipo: %c \n",i,tablaDeSimbolos.variables[i]->nombre, getTipo(tablaDeSimbolos.variables[i]->nombre));
            }
     }
     printf("\n");

}
