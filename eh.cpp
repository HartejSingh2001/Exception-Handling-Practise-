// Example 1 (Basic)
// Whenever throw is done we exit try and go to catch block directly and dont come back to try block
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter x and y ";
    cin>>x>>y;
    try
    {
        if(y==0)
        {
            throw "y is 0 exception will be thrown \n";
        }
        else
        {
            cout<<"The answer without exception is ::"<<x/y<<"\n";
        }
        cout<<"Last line of try block"<<"\n";
    }catch(const char*e)// const keyword should be written 
    {
        cerr<<e;// cerr not cout
    }
    cout<<"Outside catch block"<<"\n";
    return 0;
}

// Example 2 (catch all block)
/*
// Whenever throw is done we exit try and go to catch block directly and dont come back to try block
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter x and y ";
    cin>>x>>y;
    try
    {
        if(y==0)
        {
            throw 'a';
        }
        else
        {
            cout<<"The answer without exception is ::"<<x/y<<"\n";
        }
        cout<<"Last line of try block"<<"\n";
    }catch(int x)
    {
       cout<<"This will activate if we would have thrown an int not a char"<<"\n";
    }
    catch(...)// in this code this catch all block is executed
    {
        cout<<"This is catch all block"<<"\n";
        cout<<"Divide by 0 exception is handeled here"<<"\n";
    }
    cout<<"Outside catch block"<<"\n";
    return 0;
}
*/

// Example 3 (Custom Exception)
/*
// Whenever throw is done we exit try and go to catch block directly and dont come back to try block
#include <iostream>

using namespace std;
class myexec: public exception
{
  public:
  const char *what() const throw()// what function is predefined so dont change the name 
  {
      return "Divide by 0 exception";
  }
};
int main()
{
    int x,y;
    cout<<"Enter x and y ";
    cin>>x>>y;
    try
    {
        if(y==0)
        {
            myexec z;
            throw z;
        }
        else
        {
            cout<<"The answer without exception is ::"<<x/y<<"\n";
        }
        cout<<"Last line of try block"<<"\n";
    }catch(exception &e)// catch is executed
    {
       cout<<e.what()<<"\n";
    }
    
    cout<<"Outside catch block"<<"\n";
    return 0;
}
*/
