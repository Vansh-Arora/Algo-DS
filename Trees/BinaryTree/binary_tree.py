class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data



def takeInput(parent, ilc):
    if parent == None:
        print("Enter root node data.")
    elif ilc:
        print("Enter left node data for {}".format(parent.data))
    else:
        print("Enter right node data for {}".format(parent.data))


    data = int(input())
    nn = Node(data)

    print("{} has left child?".format(nn.data))
    hlc = int(input())
    if hlc:
        nn.left = takeInput(nn, True)

    print("{} has right child?".format(nn.data))
    rlc = int(input())
    if rlc:
        nn.right = takeInput(nn, False)

    return nn

def display(node):
    if node == None:
        return
    res = ""
    if node.left == None:
        res += "."
    else:
        res += str(node.left.data)
    res += "<-{}".format(node.data)
    if node.right == None:
        res += "->."
    else:
        res += "->" + str(node.right.data)
    print(res)
    display(node.left)
    display(node.right)

def inOrder(node):
    if node == None:
        return
    inOrder(node.left)
    print(node.data)
    inOrder(node.right)
root = takeInput(None,False)
display(root)
inOrder(root)