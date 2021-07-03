
#include<iostream>
using namespace std ;

class student 
{
    public :
        int  id ;
        double  gpa ;
        void display (){

            cout <<  "  ID : " <<  id << "   " << " GPA : " << gpa << endl ;
        }

} ;

int main ()
{
    student rafin ;
    cout << "  Student name : Rafin" <<endl ;
    rafin.id = 201 ;
    rafin.gpa = 5.00 ;
    rafin.display ();

    student nazifa ;
    cout << " Student name : Nazifa " <<endl ;
    nazifa.id = 202 ;
    nazifa.gpa = 5.00 ;
    nazifa.display ();




}