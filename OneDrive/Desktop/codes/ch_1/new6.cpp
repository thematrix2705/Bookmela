#include <iostream.h>
 #include<conio.h>
  #define MAX 2
   class Account {  
    int acc_id;
      char name[15];
        int balance;
          public:  void assignAccount()  {
              cout<<"Enter Account Id : ";
              cin>>acc_id;
              cout<<"Enter Name : ";
              cin>>name;  
               cout<<"Enter Balance : ";
              cin>>balance;  }
    void display()  {   
      cout<<endl<<"Account Id : "<<acc_id<<endl;   
      cout<<"Name : "<<name<<endl;   
      cout<<"Balance : "<<balance<<endl;   
      cout<<"-------------------------------\n";  }  
      int search(int id)  { 
        if(acc_id==id)   
        {   
          cout<<endl<<"Account Id : "<<acc_id<<endl;   
          cout<<"Name : "<<name<<endl;   
          cout<<"Balance : "<<balance<<endl;   
          return 1;   
          }   
          else return 0;  
          } 
          }; 
          int main() {  
            Account A[MAX];  
            clrscr();   
            for(int i=0;i<MAX;i++)  {   
              A[i].assignAccount();  
              }  
              cout<<"Display Account Information : ";  
              for(i=0;i<MAX;i++)  {   
                A[i].display();  
                }  
                cout<<"Search Account : ";  
                cout<<"Enter Account ID : ";  
                int aId;  cin>>aId;  
                int flag=0;  
                for(i=0;i<MAX;i++) {   
                  flag = A[i].search(aId);   
                  if(flag==1)    
                  break;  
                  }  
                  if(flag==0)  {   
                  cout<<"Account is Not Exist....";  
                  }  
                  getch();  
                  return 0; 
                  }
