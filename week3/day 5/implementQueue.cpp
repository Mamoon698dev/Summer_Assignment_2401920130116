class MyQueue {
public:

    stack<int> input;
    stack<int> output;


    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
        
    }
    
    int pop() {

        move();
        int pop = output.top();
        output.pop();

        return pop;
        
    }
    
    int peek() {
        move();
        return output.top();
    }
    
    bool empty() {
        return output.empty() && input.empty();
    }

    void move(){
        if(output.empty()){

            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }
};