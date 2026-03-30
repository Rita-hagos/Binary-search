# Binary-search

##Question 2:
For a well balance binary search tree, the max numb of step is about log2(n)
 so 1000 values = log2(1000) = 10
 = 10 steps

 ##Question 3:
 Steps to find the greatest value in a binary search tree

 Find-Greatest (root)
     if root == NULL
       return "Tree is empty"
     current = root
   while current -> right!= NULL
     current = current -> right
   return current -> data

   
