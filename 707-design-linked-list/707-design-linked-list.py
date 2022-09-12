class MyLinkedList:

    def __init__(self):
        self.linked = []
        

    def get(self, index: int) -> int:
        if len(self.linked) - 1 < index:
            return -1
        return self.linked[index]

    def addAtHead(self, val: int) -> None:
        self.linked.insert(0, val)

    def addAtTail(self, val: int) -> None:
        self.linked.append(val)

    def addAtIndex(self, index: int, val: int) -> None:
        if index <= len(self.linked):
            self.linked.insert(index, val)

    def deleteAtIndex(self, index: int) -> None:
        if len(self.linked) > index:
            self.linked.pop(index)
            


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)