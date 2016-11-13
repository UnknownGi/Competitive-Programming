## CC P6 - Root of the Problem

### Problem Statement

```
Chef has a binary tree. The binary tree consists of 1 or more nodes. Each node has a unique integer id. Each node has up to 2 children, which are identified by their ids, and each node is the child of at most 1 other node. A node X is considered to be an ancestor of node Y if node Y is a child of node X or if there is some node Z for which X is an ancestor of Z and Y is a child of Z. No node is an ancestor of itself. A special node called the root node is an ancestor of all other nodes.

Chef has forgotten which node of his tree is the root, and wants you to help him to figure it out. Unfortunately, Chef's knowledge of the tree is incomplete. He does not remember the ids of the children of each node, but only remembers the sum of the ids of the children of each node.
```

### Constraints

```
1 ≤ T ≤ 50
1 ≤ N ≤ 30
All node ids are between 1 and 1000, inclusive

Time Limit: 1sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Generating a complete tree data structure
- Finding through all possible combinations(exhaustive search)
- Assuming more than 1 root node can exist

This problem asks us to find the ID of the root node(question tricks us in believing multiple roots can exists but that will never happen with a real tree data structure). The problem is quiet easy if looked through a simple perspective.

### Problem Solving

The problem is solved by adding the parent nodes seperately and the child nodes seperately

```C++
int p=0, s=0, a, b;
REPN(i,0,q) {
    scanf("%d %d", &a, &b);

    p += a;
    s += b;
}
```

Next we need to subtract parent result from child result to obtain the value of the root node(this our answer)

```C++
printf("%d\n", (p-s));
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12093743
- Codechef solution link: https://www.codechef.com/viewsolution/12093743
- Editorial: http://discuss.codechef.com/problems/TREEROOT
- Time taken: 0sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
