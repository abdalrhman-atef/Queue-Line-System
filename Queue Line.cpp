
#include <iostream>
#include"clsQueueLine.h"
using namespace std;
int main()
{
	clsQueueLine PayBillsQueue("A0",10);
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "Pay Bills Queue Info :\n";
	PayBillsQueue.PrintInfo();
	PayBillsQueue.PrintTicketsLineLTR();
	PayBillsQueue.ServeNextClient();
	cout<<"Served Clients :"<< PayBillsQueue.ServedClients()<<"\n";
	cout << "Next CLient is :" << PayBillsQueue.WhoIsNext()<<endl;

}
