
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class dress{
  private:
      char filename[20];
  protected:
      char dressname[60];
      char dressid[10];
      float price;
      void get();
};

class emp{
    private:
        char filename[20];
    protected:
        char employeename[20];
        char employeeid[10];
        long long employeephone;
        char employeeaddress[20];
        float employeesalary;
        void get();
};

void dress::get()
{
    cout<<"\n ENTER  DRESS NAME  : ";
    cin>>dressname;
    cout<<"\n ENTER DRESS ID  NO : ";
    cin>>dressid;
    cout<<"\n ENTER DRESS PRICE  : ";
    cin>>price;

    strcpy(filename,dressid);
    strcat(filename,".txt");
    ofstream  x(filename);

    x<<"\n\nDRESS NAME  :"<<dressname;
    x<<"\n\nDRESS ID  :"<<dressid;
    x<<"\n\nPRICE     :"<<price;
    x.close();
}

void emp::get()
{
    cout<<"\n ENTER EMPLOYEE NAME  : ";
    cin>>employeename;
    cout<<"\n ENTER EMPLOYEE ID NO : ";
    cin>>employeeid;
    cout<<"\n ENTER EMPLOYEE PHONE NUMBER : ";
    cin>>employeephone;
    cout<<"\n ENTER EMPLOYEE ADDRESS : ";
    cin>>employeeaddress;
    cout<<"\n ENTER EMPLOYEE SALARY : ";
    cin>>employeesalary;

    strcpy(filename,employeeid);
    strcat(filename,".txt");
    ofstream  y(filename);

    y<<"\n\nEMPLOYEE NAME  :"<<employeename;
    y<<"\n\nEMPLOYEE ID NO :"<<employeeid;
    y<<"\n\nEMPLOYEE PHONE NUMBER :"<<employeephone;
    y<<"\n\nEMPLOYEE ADDRESS :"<<employeeaddress;
    y<<"\n\nEMPLOYEE SALARY :"<<employeesalary;
    y.close();
}

class male:protected dress
{
   public:
        male();
};
male::male()
{
    get();
    fstream x("MALE.txt",ios::app|ios::out);
    x<<dressname;
    x<<"\t"<<dressid;
    x<<"\t "<<price<<endl;
    x.close();
}

class female:protected dress
{
    public:
       female();
};

female::female()
{
    get();
    fstream x("FEMALE.txt",ios::app|ios::out);
    x<<dressname;
    x<<"\t"<<dressid;
    x<<"\t "<<price<<endl;
    x.close();
}

class childrn:protected dress
{
    public:
        childrn();
};

childrn::childrn()
{
    get();
    fstream x("CHILD.txt",ios::app|ios::out);
    x<<dressname;
    x<<"\t"<<dressid;
    x<<"\t "<<price<<endl;
    x.close();
}

class employee:protected emp
{
    public:
        employee();
};

employee::employee()
{
    get();
    fstream y("EMPLOYEE.txt",ios::app|ios::out);
    y<<employeename;
    y<<"\t"<<employeeid;
    y<<"\t "<<employeephone;
    y<<"\t "<<employeeaddress;
    y<<"\t "<<employeesalary<<endl;
    y.close();
}

class add
{
    private:
        int i;
    public:
        add();
};

add::add()
{
    system("cls");

    while(1)
     {
        system("cls");
        cout<<"\n\n";
        cout<<"\t\t Categories of the dress products\n\n";
        cout<<"\n\n01. MALE DRESS. \n\n02. FEMALE DRESS. \n\n03. CHILDREN DRESS.";
        /*cout<<"\n\n04.EMPLOYEE.*/cout<<"\n\n04. EXIT. ";
        cout<<"\n\n\n\t Enter your option :";
        cin>>i;


        if(i==1)
        {
            male m;
        }

        if(i==2)
        {
            female f;
        }

        if(i==3)
        {
            childrn c;
        }
        /*if(i==4)
        {
            employee e;
        }*/
        if(i==4)

        break;
     }
}

class addemp{
 private:
      int j;
 public:
      addemp();
};

addemp::addemp()
{
    system("cls");
    employee e;

};

class search
{
    private:
        int m;
        char ch;
    public:
        search();
};
search::search()
{
    while(1)
    {
        system("cls");
        cout<<"\n\n 01.Male dress";
        cout<<"\n\n 02.Female dress";
        cout<<"\n\n 03.Children dress";
        //cout<<"\n\n 04.Employee";
        cout<<"\n\n 04.Search by dress id";
        cout<<"\n\n 05.Exit";
        cout<<"\n\n\t Select an option :";
        cin>>m;
        if(m==1)
        {
            ifstream m("MALE.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }

if(m==2)
        {
            ifstream m("FEMALE.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(m==3)
        {
            ifstream m("CHILD.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }
                        /* if(m==4)
                        {
                          ifstream m("EMPLOYEE.txt");
                          while(m)
                           {
                             m.get(ch);
                             cout<<ch;


                           }
                     getch();

                         }*/

        if(m==4)
        {
            char did[10],filename[20];
            cout<<"input id for search:";
            cin>>did;
            strcpy(filename,did);
            strcpy(filename,did);
            strcpy(filename,did);
            strcat(filename,"MALE.txt");
            strcat(filename,"FEMALE.txt");
            strcat(filename,"CHILD.txt");
            ifstream m(filename);
            fstream x(filename,ios::out);
            x<<"INFORMATION IS UNAVALABLE";
            x.close();
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(m==5)
            break;
    }
}

class showdress{
    private:
        int m;
        char ch;
    public:
        showdress();
};

showdress::showdress()
{
    while(1)
    {
        cout<<"\nSelect the category of dress :  ";
        cout<<"01.Male dress";
        cout<<"\n\t\t\t\t02.Female dress";
        cout<<"\n\t\t\t\t03.Children dress";
        //cout<<"\n\n 04.Exit";
        cout<<"\n\n\t Select an option :";
        cin>>m;
        if(m==1)
        {
            ifstream m("MALE.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(m==2)
        {
            ifstream m("FEMALE.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(m==3)
        {
            ifstream m("CHILD.txt");
            while(m)
            {
                m.get(ch);
                cout<<ch;
            }
            getch();

        }

     break;

   }

}

class searchemp{
    private:
        int n;
        char ch;
    public:
        searchemp();
};

searchemp::searchemp()
{
    while(1)
    {
        system("cls");
        cout<<"\n\n 01.List of Employees";
        cout<<"\n\n 02.Search by id";
        cout<<"\n\n 03.Exit";
        cout<<"\n\n\t Select an option :";
        cin>>n;
        if(n==1)
        {
            ifstream n("EMPLOYEE.txt");
            while(n)
            {
                n.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(n==2)
        {
            char eid[10],filename[20];
            cout<<"input id for search:";
            cin>>eid;
            strcpy(filename,eid);
            strcat(filename,"EMPLOYEE.txt");
            ifstream n(filename);
            fstream x(filename,ios::out);
            x<<"INFORMATION IS UNAVALABLE";
            x.close();
            while(n)
            {
                n.get(ch);
                cout<<ch;
            }
            getch();
        }
        if(n==3)
           break;
    }
}

class cut{

    public:
         cut();
};
cut::cut(){
    char id[20],filename[20];
    cout<<"\n\nEnter the id to delete : ";
    cin>>id;
    strcpy(filename,id);
    strcat(filename,".txt");

    fstream x(filename,ios::out);

    x<<"INFORMATION IS UNAVALABLE";

    x.close();
}

class buy{
 public :
    buy();
};

buy::buy(){
   char id[20],filename[20];
   cout<<"\n Enter the Dress ID to buy :  ";
   cin>>id;
   strcpy(filename,id);
   strcat(filename,".txt");
   cout<<"Thanks for purchasing ";

   fstream x(filename,ios::out);

   x<<"Out of Stock";
   x.close();
}

int main()
{
int i;
    int j;
    int k;
    int id;
    system("cls");

    while(1)
    {
        //system("cls");
        cout<< "Choose an option\n\n";
        cout<< "\n\t01. Garments.\n";
        /* cout<< "\n\t01. Add a product.\n";
        cout<< "\n\t02. Search any product.\n";
        cout<< "\n\t03. Delete any product.\n";*/
        cout<< "\n\t02. Employee.\n";
        cout<< "\n\t03. customer.\n";
        cout<< "\n\t04. Exit.\n";

        cout<< "\n\n\nEnter an option :";
        cin>>i;

        if(i==1)
        {
            while(1)
            {
                system("cls");
                cout<< "Choose an option\n\n";
                cout<< "\n\t01. Add a dress.\n";
                cout<< "\n\t02. Search a dress.\n";
                cout<< "\n\t03. Delete a dress.\n";
                cout<< "\n\t04. Exit.\n";
                cout<< "\n\n\nEnter an option :";
                cin>>j;

                if(j==1)
                {
                   add a;
                }

                if(j==2)
                {
                   search s;
                }

                 if(j==3)
                {
                    cut c;
                }
                if(j==4)
                {
                    break;
                }
            }
        }
        if(i==2)
        {
            while(1)
            {
                system("cls");
                cout<< "Choose an option\n\n";
                cout<< "\n\t01. Add an Employee.\n";
                cout<< "\n\t02. Search an Employee.\n";
                cout<< "\n\t03. Delete an Employee.\n";
                cout<< "\n\t04. Exit.\n";

                cout<< "\n\n\nEnter an option :";
                cin>>k;
                if(k==1)
                {
                   addemp ae;
                }

                if(k==2)
                {
                    searchemp se;
                }

                 if(k==3)
                {
                    cut c;
                }
                if(k==4)
                    break;
            }
        }
        if(i==3)
        {
            cout<<"\nHello welcome to E5 Garments\n";

            showdress sd;cout<<endl;


            buy b;cout<<endl;


          //  cout<<"thanks for purchase";

        }

        if(i==4)
            break;
   }

return 0;
}
