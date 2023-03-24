#include <iostream>

using namespace std;

class Node
{
    public:

    string data;
    int c;
    Node* left;
    Node* right;


    Node(string data){
        this->data = data;
        this->c = 1;
        this->left = nullptr;
        this->right = nullptr;
    };
};

class Tree
{
public:

    Node* root;

    Tree(){
        this->root = nullptr;
    };

 


    void destroyTree(Node *Node)
    {
    if(Node!=nullptr)
    {
        destroyTree(Node->left);
        destroyTree(Node->right);
        delete Node;
    }
    }

    ~Tree(){
        if (this->root != nullptr)
        {
            destroyTree(this->root);

        }
        
    }

    void inserData(string data){
        // Node* newNode = new Node(data);

        if (this->root==nullptr)
        {
            Node* newNode = new Node(data);
            this->root=newNode;
            return;
        }

        this->_insertData(this->root, data);
        
    }

    void _insertData(Node* currNode, string data){
        if (data < currNode->data)
        {
            if (currNode->left == nullptr)
            {
                Node* newNode = new Node(data);
                currNode->left = newNode;
            }
            else{
                this->_insertData(currNode->left, data);
            }
            
        }
        else if (data > currNode->data)
        {
            if (currNode->right==nullptr)
            {
                Node* newNode = new Node(data);
                currNode->right = newNode;
            }
            else{
                this->_insertData(currNode->right, data);
            }
            
        }
        else{
            currNode->c++;
        }
        
        
    }

    void treePrint(Node *node)
{
	if(node == nullptr) return;
    treePrint(node->left);

    for (int i = 0; i < node->c; i++)
    {
        cout << node->data << "\n";
    }
    
	
	
    treePrint(node->right);
}
};


int main(){

    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);



    Tree tree;

    int a;
    string s;

    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>s;
        tree.inserData(s);
    }

    cout<<"\n";
    
    tree.treePrint(tree.root);

    return 0;
}