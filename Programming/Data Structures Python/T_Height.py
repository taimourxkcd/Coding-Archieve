def getHeight(self):
		if self.root:
			return self.root.getHeight()
		else:
			return -1

def height(self, node):
        if node is None:
            return -1
        left_height = self.height(node.left)
        right_height = self.height(node.right)

        return 1 + max(left_height, right_height)
