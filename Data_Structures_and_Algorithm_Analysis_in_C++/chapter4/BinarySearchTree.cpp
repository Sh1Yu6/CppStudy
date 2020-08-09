
/************************************************
#
#      Filename: BinarySearchTree.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-09 07:41:06
# Last Modified: 2020-08-09 08:59:48
#***********************************************/
#include <iostream>
using namespace std;

template<typename Comparable>
class BinarySearchTree
{
    public:
        BinarySearchTree();
        BinarySearchTree(const BinarySearchTree& rhs):root{nullptr}
        {
            root = clone(rhs.root);
        }
        BinarySearchTree(BinarySearchTree&& rhs);
        ~BinarySearchTree()
        {
            makeEmpty();
        }

        const Comparable& findMin() const
        {
            return findMin(root);
        }
        const Comparable& findMax() const
        {
            return findMax(root);
        }
        bool contains(const Comparable& x) const
        {
            return contains(x, root);
        }
        bool isEmpty() const;
        void printTree(ostream& out = cout) const;

        void makeEmpty()
        {
            makeEmpty(root);
        }
        void insert(const Comparable& x)
        {
            insert(x, root);
        }
        void insert(Comparable& x)
        {
            insert(x, root);
        }
        void remove(const Comparable& x)
        {
            remove(x, root);
        }

        BinarySearchTree& operator=(const BinarySearchTree& rhs);
        BinarySearchTree& operator=(BinarySearchTree&& rhs);

    private:
        struct BinaryNode
        {
            Comparable element;
            BinaryNode* left;
            BinaryNode* right;

            BinaryNode(const Comparable& theElement, BinaryNode* lt,
                       BinaryNode* rt)
                : element{theElement}, left{lt}, right{rt}{}

            BinaryNode(Comparable&& theElement, BinaryNode* lt, 
                       BinaryNode* rt)
                : element{std::move(theElement)}, left{lt}, right{rt}{}
        };

        BinaryNode* root;

        void insert(const Comparable& x, BinaryNode*& t)
        {
            if(nullptr == t)
            {
                t = new BinaryNode(x, nullptr, nullptr);
            }
            else if(x < t->element)
            {
                insert(x, t->left);
            }
            else if(t->element < x)
            {
                insert(x, t->right);
            }
            else
            {

            }
        }
        void insert(Comparable&& x, BinaryNode*& t)
        {
            if(nullptr == t)
            {
                t = new BinaryNode(std::move(x), nullptr, nullptr);
            }
            else if(x < t->left)
            {
                insert(std::move(x), t->left);
            }
            else if(t->element < x)
            {
                insert(std::move(x), t->right);
            }
            else
            {

            }
        }
        void remove(const Comparable& x, BinaryNode*& t)
        {
            if(nullptr == t)
            {
                return;
            }
            if(x < t->element)
            {
                remove(x, t->left);
            }
            else if(t->element < x)
            {
                remove(x, t->right);
            }
            else if(t->left != nullptr && t->right != nullptr)
            {
                t->element = findMin(t->right)->element;
                remove(t->element, t->right);
            }
            else
            {
                BinaryNode* oldNode = t;
                t = (t->left != nullptr)? t->left:t->right;
                delete oldNode;
            }
        }
        BinaryNode* findMin(BinaryNode* t) const
        {
            if(nullptr == t)
            {
                return nullptr;
            }

            if(nullptr == t->left)
            {
                return t;
            }

            return findMin(t->left);
        }
        BinaryNode* findMax(BinaryNode* t) const
        {
            while(t)
            {
                t = t->right;
            }
            return t;
        }
        bool contains(const Comparable& x, BinaryNode* t) const
        {
            if(t == nullptr)
            {
                return false;
            }
            else if(x < t->element)
            {
                contains(x, t->left);
            }
            else if(x > t->element)
            {
                contains(x, t->right);
            }
            else
            {
                return true;
            }
        }
        void makeEmpty(BinaryNode*& t)
        {
            if(nullptr != t)
            {
                makeEmpty(t->left);
                makeEmpty(t->right);
                delete t;
            }
            t = nullptr;
        }
        void printTree(BinaryNode* t, ostream& out) const;
        BinaryNode* clone(BinaryNode* t) const
        {
            if(nullptr == t)
            {
                return nullptr;
            }

            return new BinaryNode{t->element, clone(t->left), clone(t->right)};
        }
};

