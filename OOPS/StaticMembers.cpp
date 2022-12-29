class Student{
    static int totalstudents;//total no. of students
    public:
    int age;
    int rollno;
      // static int totalstudents;//total no. of students
     Student(){
        totalstudents++;//to find total no of obj created that is total no of students
     }
     int getrollno(){//non static fn  contains only non static parameters like roll no
        return rollno;
     }
    static int gettotalstudents(){//static fn  contains only static parameters like totalstudents
        return totalstudents;
     }
};
int Student :: totalstudents=0;//initialising static data members