// Stack class.
class Stack {
    int topi = 0;
    int cap = 0;
    int* arr = NULL;
public:
    
    Stack(int capacity) {
        // Write your code here.
        cap = capacity;
        arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(topi == cap) return;
        arr[topi] = num;
        topi++;
    }

    int pop() {
        // Write your code here.
        if(topi>0){
            topi--;
            return arr[topi];
        }
        else return -1;
    }
    
    int top() {
        // Write your code here.
        if(topi>0) return arr[topi-1];
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(topi==0) return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(topi==cap) return 1;
        else return 0;
    }
    
};
