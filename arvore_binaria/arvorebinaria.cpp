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
Node *initialize(){
	return NULL;
}

//criacao de item
Item itemCreate(int cod){
	Item item;
	item.codigo = cod;
	return item	
}

//insercao :: retorno eh o endereco de um no qlqr
Node *insert(Node *node, Item num){
	// quando a arvore esta nula
	if(root == NULL){
		Node *newNode = (Node*)malloc(sizeof(Node)); //alocando espaco p o node
		newNode=>item = num; // num esta indo para dentro do novo no criado
		// como a ultima posicao livre foi a raiz, a esquerda e a direita vao ser nulas
		newNode=>left = NULL;
		newNode=>right = NULL;
		return newNode;
	}
	
}

int main(){
	//representando a arvore
	Node *root = initialize();
	
	root = insert(root, itemCreate(15));
	return 0; 
}
