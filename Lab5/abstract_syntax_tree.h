typedef struct expression_node
{
	/*	needs 3 members
			i) pointer to the left child
			ii) string to store the value of the node
			iii) pointer to the right child
	*/
	struct expression_node* left;
	char* val;
	struct expression_node* right;
}expression_node;

expression_node* init_exp_node(char* val, expression_node* left, expression_node* right);
void display_exp_tree(expression_node* exp_node);
