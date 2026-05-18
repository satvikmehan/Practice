#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CWS
{
    protected:
         string title;
         float rating;
    public:
        CWS(string s,float r)
        {
            title=s;
            rating=r;
        }
        virtual void display()
        {
            cout<<"PRANK"<<endl;
        }

};

class CWSVideo : public CWS
{
    float videoLength;
    public:
        CWSVideo(string s,float r,float vl):CWS(s,r)
        {
            videoLength=vl;

        }
        void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings "<<rating<<" out of 5 star"<<endl;
            cout<<"Length of the video is "<<videoLength<<" minutes"<<endl;
        }
};

class CWSText : public CWS
{
    int words;
    public:
        CWSText(string s,float r,int wc):CWS(s,r)
        {
            words=wc;
            
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings "<<rating<<" out of 5 star"<<endl;
            cout<<"No of words in this text tutorial "<<words<<" words"<<endl;
        }
};

int main()
{
    string title;
    float rating,vlen;
    int words;

    title="C++ tutorial";
    vlen=4.56;
    rating=4.9;
    CWSVideo CTut(title,rating,vlen);
    //CTut.display();

    title="Python tutorial";
    words=100;
    rating=4.5;
    CWSText PythonTut(title,rating,words);
    //PythonTut .display();

    CWS* tuts[2];
    tuts[0] = &CTut;
    tuts[1] = &PythonTut;

    tuts[0]->display();
    tuts[1]->display();

    
    return 0;
}