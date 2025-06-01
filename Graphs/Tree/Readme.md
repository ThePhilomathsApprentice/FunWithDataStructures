# Trees
A subset of graph, that does not have any cycle.
- Hierarchical
- no cycles allowed.

## Full Tree.
```
For a given height, the maximum number of nodes are present in the tree.
If you want to add any node, than the height will increase.
For height h, it can have 2^(h+1)-1 number of nodes.
```

###  Complete Tree.
```
if you represent a binary tree in array,
then from 1st element to last element, there should be no gaps in the between anywhere.
Every full Binary tree is also a complete binary tree.
A complete binary tree of height h is a full binary tree upto height h-1,
and the last level is filled from left to right.
The height of a complete binary tree is log(n)
```

### Heap
```
Heap is a complete binary tree.

Max heap:
Every parent/node is having value greater than its descendents.

Min heap:
Every parent/node is having value smaller than its descendents.
```
