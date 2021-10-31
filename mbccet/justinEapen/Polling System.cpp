#include <iostream>
#include <string>
using namespace std;
int main()
{
    int w,t=0,y=0;
    char r;
    string q;
     cout<<"Enter the Question for the Poll:\n";
     getline (cin, q);
     cout<<"\nEnter the number of voters:";
     cin>>w;
     for (int i=w;i>0;i--)
     {
         
         cout<<"\n"<<q<<"\nFor YES Enter - 'Y'\nFor NO Enter - 'N'\n";
         cin>>r;
         switch(r)
         {
             case 'Y':
             cout<<"\nYou have voted - YES\nThank you\n\n";
             t++;
             break;

             case 'N':
             cout<<"\nYou have voted - NO\nThank you\n\n";
             y++;
             break;
             default: cout<<"\nWrong Input\n\n";
             break;
         }
     }
     
     cout<<q;
     if(t>y)
     {
         cout<<"\nThe majority has voted for - YES";
     }
     else if(t==y)
     {
         cout<<"\nIt is a TIE";
     }
     else
     {
         cout<<"\nThe majority has voted for - NO";
     }
      return 0;   

}
