# djikstra's algorithm implementation
def djikstra(graph, start, end):
    # keep track of all nodes that have been visited
    explored = []
    # keep track of all the paths to be checked
    queue = [[start]]

    # return path if start is the same as the end
    if start == end:
        return "That was easy! Start = End"

    # keeps looping until all possible paths have been checked
    while queue:
        # pop the first path from the queue
        path = queue.pop(0)
        # get the last node from the path
        node = path[-1]
        if node not in explored:
            neighbours = graph[node]
            # go through all neighbour nodes, construct a new path and
            # push it into the queue
            for neighbour in neighbours:
                new_path = list(path)
                new_path.append(neighbour)
                queue.append(new_path)
                # return path if neighbour is the end node
                if neighbour == end:
                    return new_path
            # mark node as explored
            explored.append(node)

# binary sort tree implementation
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, data):
        if self.value == data:
            return False
        elif self.value > data:
            if self.left:
                return self.left.insert(data)
            else:
                self.left = Node(data)
                return True
        else:
            if self.right:
                return self.right.insert(data)
            else:
                self.right = Node(data)
                return True

    def find(self, data):
        if self.value == data:
            return True
        elif self.value > data:
            if self.left:
                return self.left.find(data)
            else:
                return False
        else:
            if self.right:
                return self.right.find(data)
            else:
                return False

    def preorder(self):
        if self:
            print(str(self.value))
            if self.left:
                self.left.preorder()
            if self.right:
                self.right.preorder()

    def postorder(self):
        if self:
            if self.left:
                self.left.postorder()
            if self.right:
                self.right.postorder()
            print(str(self.value))

    def inorder(self):  
        if self:
            if self.left:
                self.left.inorder()
            print(str(self.value))
            if self.right:
                self.right.inorder()
        print(str(self.value))

    def height(self):
        if self is None:
            return 0
        else:
            left_height = self.left.height()
            right_height = self.right.height()
            if left_height > right_height:
                return left_height + 1
            else:
                return right_height + 1

    def find_min(self):
        current = self
        while current.left is not None:
            current = current.left
        return current

    def remove(self, data):
        if self is None:
            return False
        if self.value == data:
            if self.left is None and self.right is None:
                self = None
                return True
            elif self.left and self.right is None:
                self = self.left
            elif self.right and self.left is None:
                self = self.right
            else:
                temp = self.right.find_min()
                self.value = temp.value
                self.right.remove(temp.value)
        elif self.value > data:
            if self.left:
                self.left.remove(data)
        else:
            if self.right:
                self.right.remove(data)

    def print_tree(self):
        if self is not None:
            self.left.print_tree()
            print(self.value)
            self.right.print_tree()

            


if __name__ == '__main__':
    graph = {
        "A": ["B", "C"],
        "B": ["A", "D", "E"],
        "C": ["A", "F"],
        "D": ["B"],
        "E": ["B", "F"],
        "F": ["C", "E"]
    }
    print(djikstra(graph, "A", "F"))
    print(djikstra(graph, "A", "A"))
    print(djikstra(graph, "A", "B"))
    print(djikstra(graph, "A", "C"))
    print(djikstra(graph, "A", "D"))

    # binary sort tree implementation
    root = Node(12)
    root.insert(6)
    root.insert(14)
    root.insert(3)
    root.insert(11)
    root.insert(1)
    root.insert(8)
    root.insert(15)

    root.preorder()
    print("\n")
    root.inorder()
    print("\n")
    root.postorder()
    print("\n")
    # print(root.height())
    print(root.find(15))

    root.remove(6)
    root.remove(14)
    root.remove(3)

    