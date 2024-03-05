//Abstract Base Class & Pure Virtual Functions in C++
#include <iostream>
#include <cstring>
using namespace std;

class Sagar {
    protected:
        string title;
        float rating;
    public:
        Sagar(string s,float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; //do-nothing function ---> Pure Virtual Function
};

class SagarVideo : public Sagar {
    float videoLength;
    public:
        SagarVideo(string s,float r,float vl):Sagar(s,r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video : "<<videoLength<<" minutes"<<endl;
        }
};

class SagarText : public Sagar {
    int words;
    public:
        SagarText(string s,float r,int wc):Sagar(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Word Count of this text tutorial : "<<words<<" words"<<endl;
        }
};

int main()
{
        string title;
        float rating,vlen;
        int words;

    // Code for Video
        title = "Django Tutorial";
        vlen = 4.56;
        rating = 4.89;
        SagarVideo djVideo(title,rating,vlen);
        djVideo.display();

        cout<<endl;

    // Code for Text
        string textTitle = "JavaScript Tutorial";
        words = 50;
        float titleRating = 4.89;
        SagarText djText(textTitle,titleRating,words);
        djText.display();
        cout<<endl;

        // ---------------------------
        Sagar* tuts[2];
        tuts[0] = &djVideo;
        tuts[1] = &djText;

        tuts[0]->display();
        cout<<endl;
        tuts[1]->display();

    return 0;
}
