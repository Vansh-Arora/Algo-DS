# Queue
Queue is an ordered list in which insertion is done at one end called rear and deletions at other end called front.

# FIFO
The first element inserted is the first one to be deleted. Hence, it is called First In First Out(FIFO) or Last In Last Out(LILO).

# Operations on Queue
enQueue: Insert an element in queue.
deQueue: Delete an element from queue.

### Conditions to lookout for:
**Underflow**: Trying to pop an element from an empty stack.</br>
**Overflow**: Trying to push an element in a full stack.

### Performance
**Time Complexity**

**Push**:O(1)</br>
**Pop**:O(1)</br>
**isEmpty**:O(1)</br>
**isFull**:O(1)</br>
**getTop**:O(1)</br>
**size**:O(1)</br>

**Space Complexity**: O(n)

### Limitations
Maximum size of the stack has to be pre-defined and it can't be changed later.