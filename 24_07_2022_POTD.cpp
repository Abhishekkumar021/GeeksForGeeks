#include <bits/stdc++.h>
using namespace std;
class bst
{
public:
    int num;
    bst *lChild, *rChild;

    bst(int n)
    {
        num = n;
        rChild = nullptr;
        lChild = nullptr;
    }
};

bst *create(int d)
{
    return new bst(d);
}
bst *insert(bst *root, int data)
{
    if (root == nullptr)
        root = create(data);
    else if (data > root->num)
        root->rChild = insert(root->rChild, data);

    else
        root->lChild = insert(root->lChild, data);

    return root;
}

void inorderTraversal(bst *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->lChild);
        cout << root->num << " ";
        inorderTraversal(root->rChild);
    }
    else
        return;
}

int rSum(bst *root)
{
    if (root != nullptr)
        return root->num + rSum(root->rChild);
}
int Sum(bst *root)
{

    if (root)
        return root->num + max(Sum(root->lChild), Sum(root->rChild));
    else
        return 0;
    // return root ? max(Sum(root->lChild), Sum(root->rChild)) + root->num : 0;
}
int main()
{
    srand(time(nullptr));
    int n, input;
    cin >> n;
    bst *root = nullptr;
    for (auto i = 0; i < n; i++)
    {
        // root=insert(root, (1 + rand() % 200));
        cin >> input;
        root = insert(root, input);
    }

    cout << rSum(root->rChild) << "\n";
    cout << Sum(root) << "\n";

    inorderTraversal(root);
    cout << "\n\n";

    return 0;
}