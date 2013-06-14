/*---- Ada Cristina França da Silva--*/
/* Desenvolva uma TAD com o uso de uma lista, onde recebe uma string e verifica se é um palindromo*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

/* ||||||||||||||||| Struct do NO ||||||||||||||||||||||||||||*/
typedef struct _slnode_{
        void *data;
        struct _slnode_ *next; /* aponta para a proxima estrutura */
}slnode;

/*||||||||||||||||| Struct do primeiro da lista ||||||||||||||||||||||||*/
typedef struct _sllist_{
        slnode *first;
}sllist;

/*|||||||||||||||| Criação da estrutura |||||||||||||||||||||||||||||||*/
sllist *sllCreate(void){

sllist *l;
        l = (sllist*) malloc (sizeof(sllist));
        if (l != NULL){
            l->first = NULL;
            return l;
        }
        return NULL;
}

/*|||||||||||||||| Destruir a estrutura |||||||||||||||||||||||||||*/
int sllDestroy(sllist *l){

 if(l != NULL){
      if (l->first != NULL){
          free(l);
          return TRUE;
      }
 }
 return FALSE;
}

/*||||||||||||||| Inserir no First |||||||||||||||||||||||||||| */
void sllInsert(sllist *l , void *elem){

slnode *node;
      if(l!=NULL){
       node =(slnode*) malloc (sizeof(slnode));
       if ( node != NULL ){
            node->data = elem;
            if (l->first == NULL){
                node->next = NULL;
                l->first = node;
            }else{
                  node->next = l->first;
                  l->first = node;
                  }
       }
      }
}

/*|||||||||||||||||| Remove o First ||||||||||||||||||||||||*/
void *sllRemoveFirst(sllist *l){

void *elem;
slnode *node;
     node =(slnode*) malloc (sizeof(slnode));
     if (node != NULL){
         if (l != NULL){
             if (l->first != NULL){
                 elem = l->first->data;
                 node = l->first;
                 l->first = node->next;
                 free(node);
                 return elem;
             }
         }
     }
   return NULL;
}

int main (){

char *string;
sllist *l;
int n,i;
int estado = TRUE;
void *valor;


    string = (char*) malloc (sizeof(char)*n);

    if (string != NULL){
        l = sllCreate();
        if ( l != NULL){
            printf("Digite o nome:");
            gets(string);
            n = strlen(string);
            for(i=0;i<n;i++){
               // if(string[i] != ' ')
                   sllInsert(l ,string[i]);
            }
            for (i=0;i<n;i++){
                if(string[i]==' ')
                {

                    continue;


                }
                valor = sllRemoveFirst(l);
                printf("%c",valor);
                if(valor==' ')
                {
                    --i;
                    continue;

                }

                if(string[i] != valor ){

                estado = FALSE;
                }
            }
            if (estado == TRUE){
                printf("Palindromo\n");
            }else printf("Nao e um palindromo\n");
            sllDestroy(l);
        }
    }
    system("PAUSE");
}















