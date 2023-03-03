#define STACK struct STACK

class CListRemoveEveryN {

    STACK {
        int info;
        STACK *next;
    };
    STACK *head;
    
    public:
        CListRemoveEveryN();
        ~CListRemoveEveryN();

        void push(int s);
        void print();
        void remove_even(int n);
        void ReverseStack();
        int counter();
        void ReleaseList();
};
