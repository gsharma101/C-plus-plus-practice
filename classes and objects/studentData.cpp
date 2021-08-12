#include <bits\stdc++.h>
using namespace std;

class student{
    // private data members
        int rollno;
        char name[25];
        float marks;
        char grade;
    public:

        void readStudents(){ //! mutator member function 
            cout<<"\n"<<"Enter rollno: ";
            cin>>rollno;
            cout<<"\n"<<"Enter Name: ";
            cin>>gets(name);
            cout<<"\n"<<"Enter marks: ";
            cin>>marks;
        }

        void displayStudents(){ //! accessor member function
            calcGrade(); //? invoking function to determine grades
            cout<<"Roll no :"<<rollno<<"\n";
            cout<<"Name :"<<name<<"\n";
            cout<<"Marks :"<<marks<<"\n";
            cout<<"Grade :"<<grade<<"\n";
        }

        int getRollno(){ //! accessor member function
            return rollno;
        }

        float getMarks(){ //! accessor member function
            return marks;
        }

        void calcGrade(){ //! mutator member function
            if(marks>=75){
                grade = 'O';
            }else if(marks >= 60){
                grade = 'A';
            }else if(marks >= 50){
                grade = 'B';
            }else if(marks >= 40){
                grade = 'C';
            }else{
                grade = 'F';
            }
        }
};

int main(){
    student XIIa[10];
    for(int i = 0;i<10;i++){
        cout<<"\nEnter details of Student"<<i+1<<":";
        XIIa[i].readStudents();
    }
    int choice,i,rno,pos = -1,highmarks = 0;
    do{
        cout<<"\n\nMain Menu\n";
        cout<<"1. Specific students\n";
        cout<<"2. Topper\n";
        cout<<"3. Exit\n";
        cout<<"\n Enter your choice(1..3):";
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"\n Enter roll no of student whose details U want to see:\n";
            cin>>rno;
            for(i=0;i<10;++i)
            {
                if(XIIa[i].getRollno() == rno) //! Notice accessor used here
                {
                    XIIa[i].displayStudents();
                    break;
                }
            }
            if(i == 10){
                cout<<"\n INVALID ROLLNO!!!\n";
            }
            break;

            case 2 : for(i=0;i<10;++i){
                for(i=0;i<10;i++){
                    if(XIIa[i].getMarks()>highmarks) //NOTICE accessor used here
                    pos = i;
                    highmarks = XIIa[i].getMarks();
                }
            }
            XIIa[pos].displayStudents();
            break;

            case 3:break;
            default:cout<<"\n Wrong Choice!!\n";
                    break;
        }
    }while(choice >= 1 && choice < 3);
    return 0;
}