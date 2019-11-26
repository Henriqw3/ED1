/**
 *
 * @author henrique
 */

#include <stdio.h>
#include <stdlib.h>

#include "TQueue.h"

int main()
{

   struct aluno al, a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};



  Queue *q = queue_create();
  q = queue_create();
  printf("Tamanho: %d\n\n\n\n",queue_size(q));

  int i;
  for(i=0; i <4; i++)
        queue_push(q,a[i]);

  printf("Tamanho: %d\n\n\n\n",queue_size(q));

  struct aluno b;
  for(i=0; i < 4; i++){
    queue_front(q,&b);
    queue_pop(q);
    printf("%s\n", b.nome);
  }


   queue_free(q);


}
