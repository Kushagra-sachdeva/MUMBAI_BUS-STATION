//  main.cpp
//  Hackathon 1
//  Created by Kushagra Sachdeva on 04/02/24.
//  main.cpp
//  Datathon 2.0
//  Created by Kushagra Sachdeva on 03/02/24.
#include <iostream>
using namespace std;

// Smart ticket system
class ticket {
public:
    int i = 10;  // integer variable for ticket base price
    int price;
    int ticketsAvailable = 40;  // total available tickets
    void getTicket(int N, int Q, char R[50] ,int S,char C )
    {
        //Bus number dataset
        string busNumber = "B";
        busNumber += to_string(N);
        // Check the selected route (N) and quantity of tickets (Q)
        if (N == 1 && Q <= 10) {
             price = i * (Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B001 " << busNumber  << endl;
        }
        else if (N == 2 && Q <= 10)
        {
             price = i * (Q-1);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B002 " << busNumber << endl;
        }
        else if (N == 3 && Q <= 10)
        {
             price = i * (Q-2);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B003 " << busNumber  << endl;
        }
        else if (N == 4 && Q <= 10)
        {
             price = i * (Q-3);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B004 " << busNumber << endl;
        }
        else if (N == 5 && Q <= 10)
        {
             price = i * (Q-4);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B005 " << busNumber  << endl;
        }
        else if (N == 6 && Q <= 10)
        {
             price = i * (Q-5);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B006 " << busNumber  << endl;
        }
        else if (N == 7 && Q <= 10)
        {
             price = i * (Q-6);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B007 " << busNumber  << endl;
        }
        else if (N == 8 && Q <= 10)
        {
             price = i * (Q-7);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B008 " << busNumber << " - Ticket price = " << price << endl;
        }
        else if (N == 9 && Q <= 10)
        {
             price = i * (Q-8);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B009 " << busNumber << " - Ticket price = " << price << endl;
        }
        
        else if (N == 10 && Q <= 9) {
             price = i * (11-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0010 " << busNumber  << endl;
        }
        else if (N == 9 && Q <= 8)
        {
            price = i * (10-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0011 " << busNumber << endl;
        }
        else if (N == 8 && Q <= 7)
        {
            price = i * (9-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0012 " << busNumber  << endl;
        }
        else if (N == 7 && Q <= 6)
        {
            price = i * (8-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0013 " << busNumber  << endl;
        }
        else if (N == 6 && Q <= 5)
        {
            price = i * (7-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0014 " << busNumber  << endl;
        }
        else if (N == 5 && Q <= 4)
        {
            price = i * (6-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0015 " << busNumber  << endl;
        }
        else if (N == 4 && Q <= 3)
        {
            price = i * (5-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0016 " << busNumber << endl;
        }
        else if (N == 3 && Q <= 2)
        {
            price = i * (4-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0017 " << busNumber  << endl;
        }
        else if (N == 2 && Q <= 1)
        {
            price = i * (3-Q);
            cout << "Ticket price = " << price << endl;
            cout << "Bus No.: B0018 " << busNumber << endl;
        }
        else
        {
            cout << "Invalid route selection" << endl;
        }
        if(C=='Y')
        {
            cout << "Number of ticket available:"<< ticketsAvailable <<endl;
            cout << "Enter number of tickets: ";
            cin >> S;
        }
        if (S > 0 && S <= ticketsAvailable) {
            cout << "Number of tickets sold:" << S << endl;
            ticketsAvailable -= S;
            cout << "Remaining tickets: " << ticketsAvailable << endl;
        }
        else
        {
            cout << "Invalid number of tickets" << endl;
        }
        if( ticketsAvailable == 0)
        {
            cout<<"Tickets sold out"<<endl;
        }
        int total_price = price * S;
        cout<<"\n\n\n-----------------"<<endl;
        cout<<"MUMBAI BUS TICKET"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"STD code: 022"<<endl;
        cout<<"Number of tickets: "<< S <<endl;
        cout<<"Telephone number: 23074272"<<endl;
        cout<<"Total Price: "<< total_price <<endl;

    }
};

int main() {
    ticket t;
    int N, Q, S; // Data type for route (N), destination (Q), and number of tickets (S)
    char C;
    char R[50]; // Data type for name (R)
    
    cout << "-------------------------------" << endl;
    cout << " WELCOME TO MUMBAI BUS STATION" << endl;
    cout << "-------------------------------" << endl;

    cout << "Enter your name: ";
    cin >> R;

    // Dataset for routes
    cout << " Select the route:\n 1.Mumbai Central\n 2.Parel\n 3.Kurla nehru Nagar\n 4.panvel\n 5.uran\n 6.Dadar Asiad\n 7.Maitri Park , Chembur\n 8.Vashi Sector 9\n 9.Vashi Highway\n 10.Dadar BMCT\n" << endl;
    
    // User Input
    cout << "Enter your location: ";
    cin >> N;
    cout << "Enter the destination: ";
    cin >> Q;
    cout << "Do u wish to proceed(Y or N): " << endl;
    cin >> C;

    // Call the function to get the ticket
    t.getTicket(N, Q, R, S, C);
}
