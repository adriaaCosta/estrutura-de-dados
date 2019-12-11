#include<stdio.h>
#include<stdlib.h>

struct item{
	int codigo;
};
typedef struct item Item;

// informacao, no de referencia a esquerda e no de referencia a direita
struct node{
	Item item; // chamando a variavel do tipo no
	struct node *left;
	struct node *right;	
};
typedef struct node Node;

//incializar a arvore
Node *treeInitialize(){
	return NULL;
}

//criacao de um numero inteiro - item
Item itemCreate(int cod){
	Item item;
	item.codigo = cod;
	return item	;
}



//insercao :: retorno eh o endereco de um no qlqr
Node *treeInsert(Node *root, Item num){
	// quando a arvore esta nula
	if(root == NULL){
		Node *newNode = (Node *)malloc(sizeof(Node)); //alocando espaco p o node
		newNode -> item = num; // num esta indo para dentro do novo no criado
		// como a ultima posicao livre foi a raiz, a esquerda e a direita vao ser nulas
		newNode -> left = NULL;
		newNode -> right = NULL;
		return newNode;
	}else{
		if(num.codigo > root -> item.codigo){//se o numero inserido > que q o da raiz = ir para direita
			root -> right = treeInsert(root-> right, num); 
			
		}else if(num.codigo < root -> item.codigo){
			root -> left = treeInsert(root-> left, num);
		}
	}
	return root;
}

Node *treeSearch(Node *root, int cod){
	if(root != NULL){
		if(root -> item.codigo == cod){
			return root;
		}else{
			if(cod > root -> item.codigo)
				return treeSearch(root->right, cod);
			else
				return treeSearch(root->left, cod);	
		}
	}
	return NULL;	
}
void treePrint(Node *root){
	
	if(root != NULL){
		printf("%d ", root -> item.codigo); //valor do proprio node
		treePrint(root -> left); //chamar funcao para esquerda
		treePrint(root -> right); //chamar funcao apra a direita
	}
}

//liberar a arvore
void treeFree(Node *root){
	
	if(root != NULL){
		treeFree(root -> left); //chamar funcao para esquerda
		treeFree(root -> right); //chamar funcao apra a direita
		free(root);
	}
}

int main(){
	//representando a arvore
	Node *root = treeInitialize();
	root = treeInsert(root, itemCreate(10));
	root = treeInsert(root, itemCreate(15));
	root = treeInsert(root, itemCreate(20));
	root = treeInsert(root, itemCreate(12));
	root = treeInsert(root, itemCreate(5));
	treePrint(root);
	
	Node *tmp = treeSearch(root, 22);
	if(tmp == NULL){
		printf(">> Elemento nao encontrado.\n");
	}else{
		printf(">> Elemento encontrado.\n");
	}
	printf("\n");
	treeFree(root);
	return 0; 
}




