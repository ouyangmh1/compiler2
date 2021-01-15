#ifndef _compile_h_
#define _compile_h_

#include <stdio.h>
#include "data_structure.h"

extern FILE* fout;

void compile(struct TreeNode*);
void pushdown(struct TreeNode*);
void write_initfunc();

#endif
