class Student{
    public://public so that it can be used outside class
    int age;
    int rollno;
    private://private cant be used outside the class error will come
    int key;
    public:
    //default constructor
    Student(){
        cout<<"constructor called"<<endl;
    }
    //destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
    //parameterized constructor
    //  Student(int a){
    //     cout<<"constructor2 called"<<endl;
    //     key=a;
    // }
     Student(int key){
        cout<<"constructor2 called"<<endl;
        this->key=key;//this is used to store current address of the object
    }
     Student(int a,int r){
        cout<<"constructor3 called"<<endl;
        cout<<"this: "<<this<<endl;
        rollno=r;
        key=a;
    }





    void display(){
        cout<<key<<" "<<rollno<<endl;
    }
    int getkey(){
        return key;
    }
    void setkey(int a,int password){
        if(password!=123){
            return;
        }
        if(a<0){
            return;
        }
        key=a;
    }

};