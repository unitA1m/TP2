#pragma once

class Item {
public:
    int data = 0;
    Item* prev = nullptr;
};

class Queue {
private:
    Item* last = nullptr;
    Item* first = nullptr;
protected:
    int size = 0;
public:
    Queue();
    explicit Queue(int el);
    Queue(const Queue& real_copy);
    ~Queue();

    Item* get_last();
    int get_size() const;
    void push(int el);
    int pop();
    int del();

    void print();

    bool operator! () const;
    Queue& operator+(const Queue& obj);
    Queue& operator -();  
    Queue& operator *();
    Queue& operator /(int qwe);
};