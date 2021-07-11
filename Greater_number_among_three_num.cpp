
#include <iostream>

using namespace std;

//Compiler version g++ 6.3.0

int main()

{

    int a,b,c;

    

   cout<<"Entry the three number: "<<endl;

   cin>>a>>b>>c;

   

   if(a>b) {

     

     if (a>c){

       cout<<"the greater number is: "<<a<<endl;

     }

     

     else {

       cout<<"the greater number is: "<<c<<endl;

       

     }

     

   }

    

    else{

      if (b>c){

        cout<<"the greater number is: "<<b<<endl;

        

      }

      

      else{

    cout<<"the greater number is: "<<c<<endl;

      }

   

    }

    return 0;

}
