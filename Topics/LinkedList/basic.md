
Với Singly Linked List trong C++, node có dạng
- <data type> data
- <node address> next node

struct Node {
    int data;
    Node* next;
}

với pointer, biến trong stack sẽ được khởi tạo và chứa địa chỉ của cell
* stack: 
    - stack address = tên biến
    - data: chứa heap address đến real data

* heap: real data
    - heap address
    - data: value

