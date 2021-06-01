 #include<iostream>
using namespace std;
class Student
{
   string name,fname,mname,ad;
   int roll,cls;
   char sec;
   float marks,total=0,percentage;

   public:
   void getinfo()
   {
       cout<<"Enter the name of a student :- ";
       getline(cin,name);
       cout<<"Enter the father name of a student :- ";
       getline(cin,fname);
       cout<<"Enter the mother name of a student :- ";
       getline(cin,mname);
       cout<<"Enter the class of a student :- ";
       cin>>cls;
       cout<<"Enter the section of the class :- ";
       cin>>sec;
       cout<<"Enter the roll number of a student :- ";
       cin>>roll;
   }
   void getmarks()
   {
       {
           
           cout<<"Enter the marks in subject out of 100 :- ";
           cin>>marks;
           total=total+marks;

       }

   }
   void outinfo()
   {
       static int k=1;
       cout<<"\n";
       cout<<" RESULT OF "<<k<<" STUDENT IS \n";
       cout<<endl;
       cout<<"Name of student is :- "<<name<<endl;
       cout<<"Father name of student is :- "<<fname<<endl;
       cout<<"Mother name of student is :- "<<mname<<endl;
       cout<<"Class of student is :- "<<cls<<endl;
       cout<<"Section of student is :- "<<sec<<endl;
       cout<<"Roll number of student is :- "<<roll<<endl;
       k++;
   }
    void gettotal(int m)
    {
         cout<<"\n";
        cout<<"Total marks of student is :- "<<total<<"/"<<m<<endl;
    }        
   void getpercentage(int t)
   {
        cout<<"\n";
       percentage=(total/t)*100;
       cout<<"Percentage of a student is :- "<<percentage<<"%"<<endl;
   } 
   void getgrade()
   {
        cout<<"\n";
       if(percentage>=99&&percentage<=100)
       cout<<"Grade is A*\n";
       else if(percentage>=90&&percentage<=98)
       cout<<"Grade is A\n";
       else if(percentage>=80&&percentage<=89)
       cout<<"Grade is B\n";
       else if(percentage>=70&&percentage<=79)
       cout<<"Grade is C\n";
       else if(percentage>=60&&percentage<=69)
       cout<<"Grade is D\n";
       else if(percentage>=50&&percentage<=59)
       cout<<"Grade is E\n";
       else if(percentage>=40&&percentage<=49)
       cout<<"Grade is F\n";
       else if(percentage>=30&&percentage<=39)
       cout<<"Grade is G\n";
   }
   void result()
   {
        cout<<"\n";
       if(percentage>=30)
         cout<<"*****STUDENT IS PASS***** \n";
        else
         cout<<"****STUDENT IS FAIL**** \n";
   }
};
int main()
{
    int n,i,m,j,ch,a;
    float total;
    cout<<"Enter the number of students :- ";
    cin>>n;
    cout<<endl;
  Student S[n];
  for(i=0;i<n;i++)
  {
      cin.ignore();
      cout<<endl;
      cout<<"ENTER DETAILS OF "<<i+1<<" STUDENT\n\n";
      S[i].getinfo();
      cout<<"Enter the number of subjects :- ";
      cin>>m;
      total=m*100;
      for(j=0;j<m;j++)
      {
          S[i].getmarks();
      }
      cout<<"\n\nPress \n 1 For information of student \n 2 For total marks of student \n 3 For percentage of student \n 4 For grade of student \n 5 For result of student \n 6 For all details \n\n";
      cout<<"Enter choice :- ";
      cin>>ch;
      switch(ch)
      {
          case 1:
          S[i].outinfo();
          break;
          case 2:
          S[i].gettotal(total);
          break;
          case 3:
          S[i].getpercentage(total);
          break;
          case 4:
          S[i].getgrade();
          break;
          case 5:
          S[i].result();
          break;
          case 6:
          S[i].outinfo();
          S[i].gettotal(total);
          S[i].getpercentage(total);
          S[i].getgrade();
           S[i].result();
          break;
          default:
          cout<<" Wrong choice!!!";
          break;
      }    
  }
      return 0;
}