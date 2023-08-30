#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class Bank
{
    private:
    int pin;
    string id, pass, name, fname, address, phone;
    float balance;
public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void already_user();
    void deposit_amount();
    void withdraw_amount();
    void transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_records();
    void show_payment();
    void withdraw_atm();
    void check_detail();
    void exit();

};
void intro()
{
    cout<<"\n\n\n\t";
    for(int i = 1; i<=60; i++)
        cout<<"*";
        cout<<"\n\t ";
        for (int i = 1; i <=59; i++)
           cout<<"*";
        cout<<"\n\t ";
         for (int i = 1; i <=58; i++)
           cout<<"*";
           cout<<"\n\n\t BANK AND ATM MANAGEMENT SYSTEM \n\t PROJECT USING C++\n\n\t  ";
             cout<<"\n\t ";
         for (int i = 1; i <=58; i++)
          cout<<"\n\t ";
          for (int i = 1; i <=59; i++)
           cout<<"*";
        cout<<"\n\t";
        for(int i = 1; i<=60; i++)
        cout<<"*";
        getch();


        

    
}
void Bank::menu()
{
    p:
    int choice;
    system("cls");
    char ch1, ch2;
    string pin, pass, email;
    cout<<"\n\n\t\tControl panel";
    cout<<"\n\n\t\t1.Bank management";
    cout<<"\n\n\t\t2.ATM management";
    cout<<"\n\n\t\t3.Exit";
    cout<<"\n\tEnter Your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\n\n\t\tPlease login in your account";
        cout<<"\n\n Please Enter your email";
        cin>>email;
        cout<<"\n\n\tEnter Your login pin";
        for(int i=0;i<6;i++)
        {
             ch1 = getch();
              pin +=ch1;
            cout<<"*";
        }
        cout<<"\n\n Enter Your password";
        for(int i=0;i<6;i++)
        {
            ch2 = getch();
              pass +=ch2;
            cout<<"*";
        }
        if(email == "aayush.kunwar@gmail.com" && pin =="329696"&& pass =="986849")
        {
            bank_management();
        }
        else
        {
            cout<<"\n\n\tYour login  details doesn't match ";
        }
        bank_management();
        break;
        case 2:

        atm_management();
        break;
        case 3:
         void exit();
        default:
            cout<<"\n\nInvalid value ....... Please try again";
    }
    getch();
    goto p;
}
void Bank::bank_management()
{
 p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t Enter your choice";
    cout<<"\n\n\t\t1.New user";
    cout<<"\n\n\t2.Already a User";
    cout<<"\n\n\t3.Deposit Option";
    cout<<"\n\n\t4.Withdraw option";
    cout<<"\n\n\t5.Transfer option";
    cout<<"\n\n\t6.Payment option";
    cout<<"\n\n\t7.Search user option ";
    cout<<"\n\n\t8.Edit user record";
    cout<<"\n\n\t9.Delete user record";
    cout<<"\n\n\t10.Show all records";
    cout<<"\n\n\t11.Payment all records";
    cout<<"\n\n\t12.Go back";
    cout<<"\n\n Enter Your Choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
            new_user();
        break;
        case 2:
        already_user();
        break;
        case 3:
        deposit_amount();
        break;
        case 4:
        withdraw_amount();
        break;
        case 5:
        transfer();
        break;
        case 6:
        payment();
        break;
        case 7:
        search();
        break;
        case 8:
        edit();
        break;
        case 9:
        del();
        break;
        case 10:
        show_records();
        break;
        case 11:
        show_payment();
        break;
        case 12:
        menu();
        default:
        cout<<"\n\n\tInvalid value ....... Please try again";
    }
    getch();
    goto p;
}
void Bank::atm_management()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t ATM Management System";
    cout<<"\n\n\t\t1.User Login & Check Balance";
    cout<<"\n\n\t2.Withdraw Amount";
    cout<<"\n\n\t3.Account Details";
    cout<<"\n\n\t4.Go back";
    cout<<"\n\n Enter Your Choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:

        break;
        case 2:
        withdraw_atm();
        break;
        case 3:
        check_detail();
        break;
        case 4:
        menu();
        default:
        cout<<"\n\n\tInvalid value ....... Please try again";
    }
    getch();
    goto p;
}
void Bank::new_user()    // Creating new user for banking 
{
 p:
    system("cls");
    fstream file;
    int p;
    string name, father,password,address, phone, id;
    cout<<"\n\n\tAdd new user ";
    cout<<"\n\n\t User ID:";
    cin>>id;
    cout<<"\n\n\tEnter your pin(5 digit only)";
    cin>>pin;
    cout<<"\n\n\tEnter your password";
    cin>>pass;
    cout<<"\n\n\t Enter your name";
    cin>>name;
    cout<<"\n\n\t Enter your father's name";
    cin>>father;
    cout<<"\n\n\t Enter your Address";
    cin>>address;
    cout<<"\n\n\tEnter your phone  number";
    cin>>phone;
    cout<<"\n\n\t Your current balance is:";
    cin>>balance;
    file.open("bank.txt", ios::in);
    if(!file)
    {
        file.open("bank.txt", ios::app|ios::out);
        file<<" \t"<< id<<"\t "<< pass<<"\t "<<name<<"\t "<<fname<<" \t"<<address<<"\t "<<phone<<"\t "<<balance<<endl;
        file.close();
    }
    else
    {
        file>>id>>pin>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        {
            if(id==id)
            {
                cout<<"\n\n Use different ID"<<endl;
                getch();
                goto p;
            }
               file>>id>>pin>>pass>>name>>fname>>address>>phone>>balance;
        }
            file.close();
             file.open("bank.txt", ios::app|ios::out);
            file<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
             file.close();
    }
    cout<<"\n\n New user account created successfully........"<<endl;
}
void Bank::already_user()
{
   system("cls");
   fstream file;
   string f_id;
   int found;
   cout<<"\n\n Already User Account";
   file.open("bank.txt", ios:: in);
   if(!file)
   {
    cout<<"\n\n File Opening Error....";
   }
   else
   {
    cout<<"\n\nEnter your User ID:";
    cin>>f_id;
      file>>id>>pass>>name>>fname>>address>>phone>>balance;
      while(!file.eof())
      {
        if(f_id == id)
        {
            system("cls");
            cout<<"\n\n\tAready a User Account";
            cout<<"\n\n Your User ID:"<<id<<"\t\t Your Pin Code:"<<pin<<"\t\t"<<"Your Password:"<<pass;
            found++;
        }
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
      }
      file.close();
      if(found==0)
      {
        cout<<"Your Data was not found"<<endl;
      }
      else
      {
        cout<<"Your Data was found:"<<endl;
      }

   }

}
void Bank::deposit_amount()
{
    fstream file, file1;
    string f_id;
    int found;
    float dep;
    system("cls");
    cout<<"\n\n\tDeposit Amount Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n  File opening error";
    }
    else
    {
        cout<<"\n\nEnter your User ID:";
    cin>>f_id;
    file1.open("bank1.txt", ios::app|ios::out);
      file>>id>>pass>>name>>fname>>address>>phone>>balance;
      while(!file.eof())
      {
        if(f_id == id)
        {
           cout<<"\n\n Enter the Amount You Want to Deposit:";
           cin>>dep;
           balance += dep;
           file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            found++;
            cout<<"\n\n\t Your Amount of:"<<dep<<"Sucessfully Deposited";
        }
        else
        {
            file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
        }
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
      }
      file.close();
      file1.close();
      remove("bank.txt");
      rename("bank1.txt", "bank.txt");
      if(found==0)
      {
        cout<<"Your Data was not found"<<endl;
      }
      else
      {
        cout<<"Your Data was found:"<<endl;
     }
}
}
void Bank::withdraw_amount()
{
    fstream file, file1;
    string f_id;
    int found;
    float with;
    system("cls");
    cout<<"\n\n\tWithdraw Amount Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n  File opening error";
    }
    else
    {
        cout<<"\n\nEnter your User ID:";
    cin>>f_id;
    file1.open("bank1.txt", ios::app|ios::out);
      file>>id>>pass>>name>>fname>>address>>phone>>balance;
      while(!file.eof())
      {
        if(f_id == id)
        {
           cout<<"\n\n Enter the Amount You Want to Withdraw:";
           cin>>with;
           if(with <= balance)
           {
             balance -= with;
           file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            cout<<"\n\n\t Your Amount of:"<<with<<"Sucessfully withdrawed";
           }
        else
        {
            file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            cout<<"\n\nYour Current Balance"<<balance<<" is Less.......";
        }
          found++;
        }
        else
        {
            file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
        }
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
      }
      file.close();
      file1.close();
      remove("bank.txt");
      rename("bank1.txt", "bank.txt");
      if(found==0)
      {
        cout<<"Your Data was not found"<<endl;
      }
      else
      {
        cout<<"Your Data was found:"<<endl;
     }
}
}
void Bank::transfer()
{
    fstream file, file1;
    system("cls");
    string s_id, r_id;
    float amnt;
    int found = 0;
    cout<<"\n\n\t Payment Transfer option";
     file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n  File Opening Error";
    }
    else
    {
        cout<<"\n\nEnter  Sender User ID For Transction: ";
        cin>>s_id;
        cout<<"\n\n Enter Reciever User ID:";
        cin>>r_id;
        cout<<"\n\n\t Enter The Amount You Want to Transfer";
        cin>>amnt;
        file1.open("bank.txt", ios::app|ios::out);
        file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        {
            if(s_id == id && amnt <= balance)
            found++;
            else if(r_id == id)
            found++;
            file>>id>>pass>>name>>fname>>address>>phone>>balance;
        }
        file.close();
        if(found =2)
        {
            file.open("bank.txt",ios::in);
            file1.open("bank1.txt", ios::app|ios::out);
            file>>id>>pass>>name>>fname>>address>>phone>>balance;
            while(!file.eof())
            {
                if(s_id == id)
                {

                    balance -=amnt;
                    file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;


                }
                else if(r_id == id)
                {
                     balance +=amnt;
                    file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
                }
                else
                {
                    file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
                }
                file>>id>>pass>>name>>fname>>address>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt", "bank.txt");

        }
        else
        {
            cout<<"\n\n\t Both Transction User ID's And Balance INVALID";

        }
    }

}
void Bank:: payment()
{
    system("cls");
    fstream file, file1;
    string t_id, b_name;
    float b_amnt;
    int found = 0;
    SYSTEMTIME x;
    cout<<"\n\n\t Payment Option";
    file.open("bank.txt", ios::in);
    if(!file)
    {
        cout<<"\n\n\t File Opening Error.......";
    }
    else
    {
        cout<<"\n\n\t Enter User ID:";
        cin>>t_id;
        cout<<"\n\n\t Enter The Bill Name";
        cin>>b_name;
        cout<<"\n\n\tEnter the Bill Amount: ";
        cin>>b_amnt;
        file1.open("bank1.txt", ios::app|ios::out);
        file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
            {
            if(t_id== id && b_amnt <= balance)
            {
             balance -= b_amnt;
             file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
                found++;
            }
            else
            {
                file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>pass>>name>>fname>>address>>phone>>balance;

            }
                file.close();
                file1.close();
                remove("bank.txt");
                rename("bank1.txt", "bank.txt");
                if(found == 1)
                {
                    GetSystemTime(&x);
                    file.open("bill.txt", ios::app|ios::out);
                    file<<t_id<<" "<<b_name<<" "<<b_amnt<<" "<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear;
                    file.close();

                    cout<<"\n\n\t"<<b_name<<"Bill Payment Was Succesfully Done..";

                }
                else
                {
                    cout<<"\n\n You Have Insufficient Balance";
                }


            }
}

void Bank:: search()
{
    system("cls");
    fstream file; 
    string t_id;
    int found = 0;
    cout<<"\n\n\t Search User Option ";
    file.open("bank.txt", ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error.....";
    }
    else 
    {
        cout<<"\n\n Enter Your User ID:";
        cin>>t_id;
        file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n Search For The Record";
                cout<<"\n\n\nYour Id is:"<<id<<" Your Name is: "<<name<<"Your Father's Name is: "<<fname<<"Your Address is: "<<address<<"Your Phone Number is: "<<phone<<"Your Current Balance is: "<<balance<<" Your Pin Code is:"<<pin<<"Your Password is:"<<pass;
                found++;
            }
            file>>id>>pass>>name>>fname>>address>>phone>>balance;
        }
        file.close();
        if(found == 0)
        {
            cout<<"\n\n\n Your User ID Cannot Be Found";
        }

    }
}
void Bank :: edit()
{
    system("cls");
    fstream file,file1;
    string t_id;
    string id, p, n, f, a, ph;
    int found = 0, pio;
    float balance;
    cout<<"\n\n\n Update User Record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n\n File Opening Error......";
    }
    else 
    {
        cout<<"\n\n Enter Your User ID";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                
                 cout<<"\n\n\tEnter your pin(5 digit only)";
                   cin>>pio;
                   cout<<"\n\n\tEnter your password";
                   cin>>p;
                   cout<<"\n\n\t Enter your name";
                   cin>>n;
                  cout<<"\n\n\t Enter your father's name";
                  cin>>f;
                  cout<<"\n\n\t Enter your Address";
                  cin>>a;
                  cout<<"\n\n\tEnter your phone  number";
                   cin>>ph;
                  cout<<"\n\n\t Your current balance is:";
                   cin>>balance;
                   file1<<" "<< id<<" "<< p<<" "<<pio<<" "<<n<<" "<<f<<" "<<a<<" "<<ph<<" "<<balance<<endl;
                   cout<<"\n\n\n Your Changes Are Saved";
                   found++;
            }
            else
            {
                file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>pass>>name>>fname>>address>>phone>>balance;

        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if(found==0)
        {
            cout<<"\n\n User ID Can't Found.....";
        }
        
    }
}
void Bank :: del()
{
    system("cls");
    fstream file,file1;
    string t_id;
    int found = 0;
    cout<<"\n\n\n Delete User Record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n\n File Opening Error......";
    }
    else 
    {
        cout<<"\n\n Enter Your User ID";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                   cout<<"\n\n\n Your Records Are  Deleted";
                   found++;
            }
            else
            {
                file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>pass>>name>>fname>>address>>phone>>balance;

        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if(found==0)
        {
            cout<<"\n\n User ID Can't Found.....";
        }
        
    }
}

void Bank :: show_records()
{
     system("cls");
     fstream file;
     int found=0;
     cout<<"\n\n\t Show All User's Records";
     file.open("bank.txt", ios::in);
     if(!file)
     {
        cout<<"\n\n\n File Opening Error....";

     }
     else
    {
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
        while(!file.eof())
        { 
            cout<<"\n\n\n User ID:"<<id<<"\nPassword:"<<pass<<"\nName:"<<name<<"\nFather's Name:"<<fname<<"\nAddress:"<<address<<"\nPhone Number:"<<phone<<"\nCurrent Balance:"<<balance;
            cout<<"\n\n=============================================================================================================================================================================";
            file>>id>>pass>>name>>fname>>address>>phone>>balance;
            found++;
        }
        file.close();
        if(found == 0)
        {
            cout<<"\n\n\n The Database is Empty....";
        }
    }
      
}
void Bank :: show_payment()
{
     system("cls");
     fstream file;
     int found=0;
     float amount;
     int found = 0, c_date, c_month, c_year;
     cout<<"\n\n\t Show All Bill's Records";
     file.open("bill.txt", ios::in);
     if(!file)
     {
        cout<<"\n\n\n File Opening Error....";

     }
     else
    {
         file>>id>>name>>amount>>c_date>>c_month>>c_year;
        while(!file.eof())
        { 
            cout<<"\n\n\n User ID:"<<id<<"\nPassword:"<<pass<<"\n Bill Name:"<<name<<"\nBill Amount:"<<amount<<"\nDate:"<<c_date<<"\nMonth:"<<c_month<<"\nYear:"<<c_year;
            cout<<"\n\n=============================================================================================================================================================================";
            file>>id>>name>>amount>>c_date>>c_month>>c_year;
            found++;
        }
        file.close();
        if(found == 0)
        {
            cout<<"\n\n\n The Database is Empty....";
        }
    }
      
}
void Bank :: withdraw_atm()
{
    fstream file, file1;
    string f_id, f_pass;
    int f_pin;
    string ch;
    int ch1;
    int found=0;
    float with;
    system("cls");
    cout<<"\n\n\tWithdraw Amount Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n  File opening error";
    }
    else
    {
        cout<<"\n\nEnter your User ID:";
    cin>>f_id;
    cout<<"\n\nEnter Your Pin";
     cout<<"\n\n\tEnter Your login pin";
        for(int i=0;i<6;i++)
        {
             ch1 = getch();
              pin +=ch1;
            cout<<"*";
        }
        cout<<"\n\n Enter Your password";
        for(int i=0;i<6;i++)
        {
            ch = getch();
              pass +=ch;
            cout<<"*";
        }
    
    file1.open("bank1.txt", ios::app|ios::out);
      file>>id>>pass>>name>>fname>>address>>phone>>balance;
      while(!file.eof())
      {
        if(f_id == id && f_pin == pin && f_pass== pass)
        {
           cout<<"\n\n Enter the Amount You Want to Withdraw:";
           cin>>with;
           if(with <= balance)
           {
             balance -= with;
           file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            cout<<"\n\n\t Your Amount of:"<<with<<"Sucessfully withdrawed";
            cout<<"\n\nYour Current Balance is:"<<balance;
           }
        else
        {
            file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
            cout<<"\n\nYour Current Balance"<<balance<<" is Less.......";
        }
          found++;
        }
        else
        {
            file1<<" "<< id<<" "<< pass<<" "<<pin<<" "<<name<<" "<<fname<<" "<<address<<" "<<phone<<" "<<balance<<endl;
        }
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
      }
      file.close();
      file1.close();
      remove("bank.txt");
      rename("bank1.txt", "bank.txt");
      if(found==0)
      {
        cout<<"Your Data was not found"<<endl;
      }
      else
      {
        cout<<"Your Data was found:"<<endl;
     }
}
}
void Bank :: check_detail()
{
    fstream file;
    string f_id, f_pass;
    int f_pin;
    string ch;
    int ch1;
    int found=0;
    system("cls");
    cout<<"\n\n\t Check Details Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n  File opening error";
    }
    else
    {
        cout<<"\n\nEnter your User ID:";
    cin>>f_id;
    cout<<"\n\nEnter Your Pin";
     cout<<"\n\n\tEnter Your login pin";
        for(int i=0;i<6;i++)
        {
             ch1 = getch();
              pin +=ch1;
            cout<<"*";
        }
        cout<<"\n\n Enter Your password";
        for(int i=0;i<6;i++)
        {
            ch = getch();
              pass +=ch;
            cout<<"*";
        }
    
   
      file>>id>>pass>>name>>fname>>address>>phone>>balance;
      while(!file.eof())
      {
        if(f_id == id && f_pin == pin && f_pass== pass)
        {
          system("cls");
            cout<<"\n\n\n User ID:"<<id<<"\nPassword:"<<pass<<"\nName:"<<name<<"\nFather's Name:"<<fname<<"\nAddress:"<<address<<"\nPhone Number:"<<phone<<"\nCurrent Balance:"<<balance;
          found++;
        }
       
         file>>id>>pass>>name>>fname>>address>>phone>>balance;
      }
      file.close();
     
     
      if(found==0)
      {
        cout<<"Your Data was not found......."<<endl;
      }
      else
      {
        cout<<"Your Data was found......."<<endl;
     }
}
}

main()
{
    Bank obj;
    intro();
    obj.menu();

}
