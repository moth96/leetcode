int clumsy(int N) {
    stack<int> st;
    st.push(N);
    int flag = 0;
    while(--N){
        switch(flag % 4){
            case 0: st.top() *= N; break;
            case 1: st.top() /= N; break;
            case 2: st.push(N); break;
            case 3: st.push(-N); break;
            default: break;
        }
        flag++;
    }
    int ret = 0;
    while(!st.empty()){
        ret += st.top();
        st.pop();
    }
    return ret;
}
