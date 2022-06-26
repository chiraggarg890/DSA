class Queue {
public:
    int *arr;
    int size;
    int rear;
    int f;
    Queue() {
        // Implement the Constructor
        size=100001;
        arr=new int[size];
        rear=0;
        f=0;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear==f)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(rear==f)
        {
            //cout<<"Queue is Empty"<<endl;
            return -1;
        }
       
        else
        {
             int ans=arr[f];
            arr[f]=-1;
            f++;
             if(rear==f)
        {
                 f=0;rear=0;
             }
                return ans;
        }
        
    
    }

    int front() {
        // Implement the front() function
        if(rear==f)
        {
            return -1;
        }
        else
        {
            return arr[f];
        }
    }
};
