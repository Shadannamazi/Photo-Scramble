# Photo-Scramble
![image](https://user-images.githubusercontent.com/89245846/223497602-46e41488-acd8-4f2e-a696-fbab0ec81603.png)

Each Block is placed in a Node of a Chain, in order from left to right as shown here:
![image](https://user-images.githubusercontent.com/89245846/223497699-5945d1ed-92c3-4934-b7d9-216ef58770e5.png)
The Chain can be rearranged, and the image reassembled to create a puzzle.
![image](https://user-images.githubusercontent.com/89245846/223497810-fab691c9-1077-43b2-bcaa-e70f1d659a0e.png)

This code will take such a scrambled image and unscramble it!

The diagram above illustrates the infrastructure of the chain. Most notably, it is a doubly-linked list, with a head pointer to the first node. Each node in a doubly-linked list contains two pointers, one to the previous node in the list prev and one to the next node next. The prev pointer of the first node and the next pointer of the last node are NULL.


In block.cpp
int width() const: Return the width of the current block.
int height() const: Return the height of the current block.
void build(PNG & im, int x, int width): From the PNG image im, grab the vertical, rectangular strip of pixels whose upper left corner is at position (x,0), and whose dimensions are width by height of the image im.
void render(PNG & im, int x) const: Draw the current block at position (x,0) in im.
In chain.cpp
void clear(): Helper function for destructor and assignment operator.
void copy(const Chain & other): Helper function for copy constructor and assignment operator.
~Chain(): Destructor.
Node * insertAfter(Node * p, const Block & ndata): Insert a new node after the node pointed to by p in the Chain.
void swap(Node *p, Node *q): Swaps the two nodes pointed to by p and q in the Chain.
void unscramble(): Rearranges the Chain into its original order based on minimizing the difference between adjacent blocks.





(artwork by Mrs. Tabitha Eller)
