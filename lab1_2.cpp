#include <iostream>
using namespace std;

class square
{
   private:
        int n,r;
        float n1,r1;
    public:
            void input(); 
            int count;
            void calc();
            void display();
                
};
 void square::input()
{
        count ++;
        cout<<"Enter an integer:";
        cin>>n;
        cout<<"Enter a float no.:";
        cin>>n1;
        
}
 void square::calc()
{
        r=n*n;
        r1=n1*n1;
        count ++;
}
void square::display()
{
        count ++;
        cout<<"Square of integer:"<< r;
        cout<<"\nSquare of float:"<< r1;
}
        

int main()
{
    
        square s;
        s.count = 0;

        s.input();
        s.calc();
        s.display();

        cout << endl;
        cout << endl << "the functions were called " << s.count << " times" << endl;

}