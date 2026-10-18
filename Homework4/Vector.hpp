
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);

    ~Vector();

    // Copy constructor
    Vector(const Vector& other);

    int getSize() const;
    int getCapacity() const;
    void push_back(int val);
    void push_front(int val);

    void Insert(int pos, int value);
    
    bool full() const;

    bool empty() const; 

    void print() const;

    void clear();

    void pop_back();            // Delete the last element from the vector

    int at(int index) const;    // Returns the value at the given index

private:
    void allocateMemory(int new_capacity);      // Allocate a new array of a given capacity

    int* data;          // array of int elements
    int size;           // the number of elements in the array
    int capacity;       // the max number of elements array can hold
};

#endif
