class MinStack {
    stack<long long> st;
    long long min;

public:
    MinStack() { 
        min = LLONG_MAX; 
    }

    void push(int value) {
        long long val=value;
        if (st.size() == 0) {
            st.push(val);
            min = val;
        } 
        else {
            if(val>=min)st.push(val);
            else{
                st.push(val+(val-min));
                min=val;
            }
        }
    }

    void pop() {
      if(st.top()<min){
         long long oldmin=2*min-st.top();
         min=oldmin;
      }
      st.pop();
    }

    int top() {
      if(st.top()<min)
         return min;
         else return st.top();
      }
     

    int getMin() {
         return min; 
         }

};
/*class MinStack {
    stack<int>st;
    stack<int>min;
public:
    MinStack() {

    }

    void push(int value) {
        st.push(value);
        if(min.size()==0 || value<min.top()){
            min.push(value);
        }
        else{
            min.push(min.top());
    }
    }

    void pop() {
     st.pop();
     min.pop();
    }

    int top() {
      return  st.top();
    }

    int getMin() {
      return min.top();
    }
};*/

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */