#include <bits/stdc++.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    /*virtual*/ void display()
    {
        cout << "Bogus code\n";
    }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " Out of 5 star" << endl;
        cout << "Length of this video is " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "Ratings: " << rating << " Out of 5 star" << endl;
        cout << "Length of the text is " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vl;
    int words;

    //for code with harry video
    title = "Django Tutorial Video";
    vl = 4.56;
    rating = 4.5;
    CWHVideo djVideo(title, rating, vl);
    djVideo.display();
    cout << endl;

    //for code with harry text
    title = "Django Tutorial Text";
    words = 400;
    rating = 4.57;
    CWHText djText(title, rating, words);
    djText.display();
    cout << endl;

    CWH *t[2];
    t[0] = &djVideo;
    t[1] = &djText;

    t[0]->display();
    cout << endl;
    t[1]->display();

    return 0;
}
/* Rules for virtual functions:

-->They cannot be static

-->They are accessed by object pointers

-->Virtual functions can be a friend of another class

-->A virtual function in base class might not be used

-->If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/