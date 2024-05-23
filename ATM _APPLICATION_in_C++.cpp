#include<iostream>
using namespace std;
void showMenu()
{
  cout<<"======================================================MENU==============================================================\n";
  cout<<"Press:1:To Check Your Balance\n";
  cout<<"Press:2:To Deposit Your money\n";
  cout<<"Press:3:To Withdraw From Your Balance\n";
  cout<<"Press:4:To Exit from service\n";
  cout<<"========================================================================================================================\n";
}
int main()
{   int option;
     double balance=1280;

     do{
     showMenu();

     cout<<"Please enter your option\n";
     cin>>option;
     system("cls");
     switch(option){

 case 1:
    cout<<"your Deposited amount is:"<<balance<<endl;
    break;
 case 2:
     int depositAmount;
  cout<<"enter your money/Deposit amount\n";
  cin>>depositAmount;
  if(depositAmount<25)
    {
    cout<<"you can't get service because your Amount of balance is too much low\n";
  }
    else
{
  balance=balance+depositAmount;//balance+=depositAmount;
  cout<<"you Deposit "<<depositAmount<<"Birr now then "<<" ";
  cout<<"your New balance is:"<<balance<<"Birr"<<endl;
  break;
  }
 case 3:
 double WithdrawAmount;
 cout<<"enter amount of withdraw from your deposit\n";
 cin>>WithdrawAmount;
 if(balance>=WithdrawAmount){
 balance=balance-WithdrawAmount;
 cout<<"you withdraw from Deposited money"<<WithdrawAmount<<"Birr then";
cout<<"your Balance is:"<<balance<<"Birr"<<endl;}
 else
    cout<<"You have not enough money\n";
 break;

 case 4:
 break;
    }
}while(option<=4);
//system("pause>0");

    return 0;
}
