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
        STACK *remove_even(int n);
        //void DisplayList();
        void ReleaseList();
};