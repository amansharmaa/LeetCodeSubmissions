# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if (p == None and q==None):
            return True
        elif(p and not q):
            return False
        elif(q and not p):
            return False
        stackp = [p]
        stackq = [q]
        while (stackp and stackq):
            t1 = stackp.pop()
            t2 = stackq.pop()
            if(t1.val != t2.val): return False
            if (t1.left != None and t2.left != None):
                stackp.append(t1.left)
                stackq.append(t2.left)
            elif (t1.left == None and t2.left == None):
                i=1
            else:
                return False
            if (t1.right != None and t2.right != None):
                stackp.append(t1.right)
                stackq.append(t2.right)
            elif (t1.right == None and t2.right == None):            
                i=1
            else:
                return False
        return True
            