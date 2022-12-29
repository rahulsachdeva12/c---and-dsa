template <typename T>
class QueueUsingStack{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
    QueueUsingStack(int s){
        data=new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }
    T getsize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }
    //insert element
    void enqueue(T element){
        if(size==capacity){
            //for dynamic queue size becomes double after it is full
            T *newData=new T[2*capacity];
            int j=0;
            for(int i=firstIndex; i<capacity;i++){
                newData[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j]=data[i];
                j++;
            }
            delete[] data;
            data=newData;
            firstIndex=0;
            nextIndex=capacity;
            capacity *=2;

            /*
            cout<<"Queue  full ! "<<endl;
            return;
            */
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1){
            firstIndex=0;
        }
        size++;
    }
    T front(){
        if(isEmpty()){
            cout<<"Queue empty !"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue(){
        if(isEmpty()){
            cout<<"Queue empty !"<<endl;
            return 0;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }

};
