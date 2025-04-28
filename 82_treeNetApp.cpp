#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void pre(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    pre(r->left);
    cout << r->data << " ";
    pre(r->right);
}

int countNodes(Node *r)
{
    if (r == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(r);
    q.push(NULL);
    int cnt = 0;
    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            cout << n->data << " ";
            cnt++;
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    return cnt;
}

int maxSumLevel(Node *r)
{
    if (r == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(r);
    q.push(NULL);
    int maxSum = 0, levelSum = 0;
    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            levelSum += n->data;
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            maxSum = max(maxSum, levelSum);
            levelSum = 0;
        }
    }
    return maxSum;
}

void leftView(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(r);
    q.push(NULL);
    bool left = true;
    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            if (left)
            {
                cout << n->data << " ";
                left = false;
            }
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            left = true;
        }
    }
}

void rightView(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(r);
    q.push(NULL);
    Node *right = NULL;
    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            right = n; // update each time so at last just before null it will store value of just before node i.e rightmost
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else
        {
            if (right)
            {
                cout << right->data << " ";
            }
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

int main()
{
    Node *r = new Node(10);
    r->left = new Node(11);
    r->right = new Node(12);
    r->left->left = new Node(13);
    r->right->right = new Node(14);
    r->left->left->right = new Node(15);
    cout << "\nPreorder: ";
    pre(r);
    cout << "\nLevelOrder: ";
    int ans = countNodes(r);
    cout << "\nNodes: ";
    cout << ans;
    cout << "\nMaximum sum level: ";
    cout << maxSumLevel(r);
    cout << "\nLeft View: ";
    leftView(r);
    cout << "\nRight View: ";
    rightView(r);
    return 0;
}