#include <stdlib.h>
#include "list_circular.h"

struct element{
	struct aluno data;
	struct element *next;
};

typedef struct element Elem; 