// bstree
//탐색에 최적화된 트리
//왼쪽 서브 트리에 있는 모든 노드의 키값은 부모 노드의 키값보다 작다.
//오른쪽 서브 트리에 있는 모든 노드의 키값은 부모노드의 키값보다 크다.
struct KNode;
void Inorder(struct KNode *);
struct KNode *Search(int, struct KNode *);


struct KNode
{
    struct KNode *left;
    struct KNode *right;
    int key;
    char data[10];
}

void Inorder(struct KNode *rootptr)
{
    if (rootptr != NULL)
    {
        Inorder(rootptr->left);
        printf("%d", rootptr->data);
        Inorder(rootptr->right);
    }
}

struct KNode *Search(int key, struct KNode *node)
{
    if (node == NULL)
    {
        return NULL;
    }
    else
    {
        if (node->key == key)
        {
            return node;
        }
        else if (key < node->key)
        {
            return Search(k, node->left);
        }
        else
        {
            return Search(k, node->right);
        }
    }
}

struct KNode* Insert(struct KNode* newNode, struct KNode* root)
{
    if(root == NULL)
    {
        return newNode;
    }
    else
    {
        if(node->key == key)
        {
            //키 중복.
        }
        else
        {
            if(newNode->key < root->key)
            {
                root->left =Insert(newNode, root->left);
            }
            else
            {
                root->right = Insert(newNode,root->right);
            }
        }
    }
    return root;
}
