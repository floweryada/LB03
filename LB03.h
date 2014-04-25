#ifndef LB03_H
#define LB03_H

typedef int Data;

class OneConnList
{
public:
    OneConnList();
    ~OneConnList();

    bool listIsEmpty() const;
    void showList() const;
    void deleteList();
    void pushToEnd(Data data);
    void popFromBegin();

     private:
        struct Node
        {
            Data data;
            Node *link;
        } *top;
};

#endif // LB3_H
