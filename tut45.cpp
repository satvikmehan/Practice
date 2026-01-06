#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no=a;
        }
        void print_number()
        {
            cout<<"Your roll number is "<<roll_no<<endl; 
        }
};

class Test : public virtual Student
{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2)
        {
            maths=m1;
            physics=m2;
        }

        void print_marks()
        {
            cout<<"Your result is here: "<<endl
                <<"Maths "<<maths<<endl
                <<"Physics "<<physics<<endl;
        }

};

class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score=sc;
        }
        void print_score()
        {
            cout<<"Your sports score is "<<score<<endl;
        }

};

class Result : public Test , public Sports
{
    private:
        float total;
    public:
        void display()
        {
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }

};


int main()
{
    Result sam;
    sam.set_number(18);
    sam.set_marks(90,95);  
    sam.set_score(100);
    sam.display();
    return 0;
}