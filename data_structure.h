#include <stdio.h>

#ifndef _data_structure_h_
#define _data_structure_h_

#include <stdlib.h>
#include <vector>
#include <map>
#include <string>
#include <memory.h>

#define NODE_MAX_CHILD_NUMBER 5

#define NODE_COMPUNIT 1000
#define NODE_CONSTDECL 1001
#define NODE_CONSTDEFS 1002
#define NODE_CONSTDEF 1003
#define NODE_VARDECL 1004
#define NODE_VARDEFS 1005
#define NODE_TYPE 1007
#define NODE_BLOCK 1009
#define NODE_BLOCKITEMS 1009	//Same as NODE_BLOCK
#define NODE_DECL 1010
#define NODE_LVAL 1011
#define NODE_ADDEXP 1012
#define NODE_MULEXP 1013
#define NODE_NUMBER 1016
#define NODE_ARREXPS 1017
#define NODE_LOREXP 1018
#define NODE_LANDEXP 1019
#define NODE_EQEXP 1020
#define NODE_RELEXP 1021
#define NODE_FUNCFPARAMS 1022
#define NODE_FUNCRPARAMS 1023
#define NODE_CONSTIDENTPARAM 1024

#define NODE_STMT_1 2001
#define NODE_STMT_2 2002
#define NODE_STMT_3 2003
#define NODE_STMT_4 2004
#define NODE_STMT_5 2005
#define NODE_STMT_6 2006
#define NODE_STMT_7 2007
#define NODE_STMT_8 2008
#define NODE_STMT_9 2009
#define NODE_STMT_10 2010
#define NODE_STMT_11 2011

#define NODE_FUNCDEF_1 4001
#define NODE_FUNCDEF_2 4002

#define NODE_PRIMARYEXP_1 5001

#define NODE_VARDEF_1 6001
#define NODE_VARDEF_2 6002

#define NODE_UNARYEXP_1 7001
#define NODE_UNARYEXP_2 7002
#define NODE_UNARYEXP_3 7003

#define NODE_FUNCFPARAM_1 8001
#define NODE_FUNCFPARAM_2 8002

/*struct InitVal {
};

struct IdentParam {
};

struct Def {
	std :: string ident;
	struct IdentParam* param;
	struct InitVal* initval;
	Def (std :: string x = "", IdentParam* p = NULL, InitVal* i = NULL) : ident(x), param(p), initval(i) {}
};

struct Defs {
	bool flag; // 0 : Const, 1 : Var
	std :: vector <Def*> defs;
	std :: string type;
	Defs (int x = 0) : flag(x), defs() {}
};

struct Block {
};

struct FuncFParam {
};

struct Func {
	std :: string ident;
	struct FuncFParam* param;
	std :: vector <BlockItem*> block;
};

struct CompUnit {
	std :: vector <Defs*> decl;
	std :: vector <Func*> func;	
	CompUnit () : decl(), func() {}
};*/

extern int tree_node_count;

struct TreeNode {
	int idx;
	int type;
	int val;
	std :: string name;
	int funcbh;
	int childnum;
	struct TreeNode* parent;
	struct TreeNode* child[NODE_MAX_CHILD_NUMBER];
	int childbh[NODE_MAX_CHILD_NUMBER];
	std :: vector <TreeNode*> childlist;
	//struct TreeNode* child[TN_MAX_CHILD_NUMBER];
	//struct TreeNode* sibling_l, sibling_r;

	TreeNode (int T = 0) {type = T, idx = tree_node_count++; parent = NULL; memset(child, NULL, sizeof(child)); funcbh = 0;}
};

extern struct TreeNode* root;
extern std :: map <std :: string, int> T_map;
extern std :: map <std :: string, int> p_map;
extern int T_map_cnt;
extern int p_map_cnt;
extern int t_cnt;
extern int goto_cnt;
extern int eeyore_cnt;
extern int func_cnt;

extern std :: vector <struct TreeNode*> init_main_list;

void yyerror(char*);

#endif
