#include <iostream>
using namespace std;
int main ()
{
	float Deposit, Withdraw, Balance=2000;
	int operation;
	start:
		cout<<"\n select an opearatio between 1-4 \n";
		cout<<"\n 1. Deposit\n 2. Withdraw \n 3. Balance\n 4. Exit\n";
		cin>> operation;
		if(operation==1)
		{
		cout<< "how much to deposit: ";
		cin>> Deposit;
		Balance+=Deposit;
		cout<< "A Deposit of "<< Deposit<<" has been made \n";
		goto start;
		}
		else if (operation==2)
		{
	     cout<< "how much to Withdraw: ";
		 cin>> Withdraw;
		 Balance-=Withdraw;
		 cout<< " A Withdrawal of "<< Withdraw<<"  has been made\n";
		 goto start;
		}
		else if(operation==3)
		{
			cout<<"Account balance= "<<Balance<<endl;
			goto start;
		}
		 else if(operation ==4)
		 {
		 	cout<< "Thanks for using the Application \n";
		 }
		 else
		 {
		 	cout<< "invalid operation- select 1-4only \n";
		 	goto start;
		 }
			return 0;
	
}
