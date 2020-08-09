
/************************************************
#
#      Filename: AvlTree.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-09 09:16:08
# Last Modified: 2020-08-09 09:33:57
#***********************************************/
#include <iostream>
using namespace std;

template<typename Comparable>
class AvlTree
{
    public:
        static const int kAllowedImbalance = 1;
        
    private:
        struct AvlNode
        {
            Comparable element;
            AvlNode* left;
            AvlNode* right;
            int height;

            AvlNode(const Comparable& ele, AvlNode* lt, AvlNode* rt, int h =0)
                :element{ele}, left{lt}, right{rt}, height{h}{}

            AvlNode(Comparable&& ele, AvlNode* lt, AvlNode* rt, int h =0)
                :element{std::move(ele)}, left{lt}, right{rt}, height{h}{}
        };

        int height(AvlNode* t) const
        {
            return t == nullptr? -1: t->height;
        }

        void insert(const Comparable& x, AvlNode*& t)
        {
            if(nullptr == t)
            {
                t = new AvlNode{x, nullptr, nullptr};
            }
            else if(x < t->element)
            {
                insert(x, t->left);
            }
            else if(t->element < x)
            {
                insert(x, t->right);
            }
            balance(t);
        }

        void balance(AvlNode*& t)
        {
            if(nullptr == t)
            {
                return;
            }
            if(height(t->left) - height(t->right) > kAllowedImbalance)
            {
                if(height(t->left->left) >= height(t->left->right))
                {
                    rotateWithLeftChild(t);
                }
                else
                {
                    doubleWithLeftChild(t);
                }
            }
            else if(height(t->right) - height(t->left) > kAllowedImbalance)
            {
                if(height(t->right->right) >= height(t->right->left))
                {
                    rotateWithRightChild(t);
                }
                else
                {
                    doubleWithRightChild(t);
                }
            }

            t->height = max(height(t->left), height(t->right)) + 1;
        }

        void rotateWithLeftChild(AvlNode*& k2)
        {
            AvlNode* k1 = k2->left;
            k2->left = k1->right;
            k1->right = k2;
            k2->height = max(height(k2->left), height(k2->right)) + 1;
            k1->height = max(height(k1->left), k2->height) + 1;
            k2 = k1;
        }

        void doubleWithLeftChild(AvlNode*& k3)
        {
            rotateWithLeftChild(k3->left);
            rotateWithLeftChild(k3);
        }

        void remove(const Comparable& x, AvlNode*& t)
        {
            if(nullptr == t)
            {
                return;
            }

            if(x < t->element)
            {
                remvoe(x, t->left);
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
                AvlNode* oldNode = t;
                t = (t->left != nullptr) ? t->left: t->right;
                delete oldNode;
            }
            balance(t);
        }

};
