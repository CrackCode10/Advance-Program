#include <iostream>
using namespace std;



// Question 

/*Write a program that calculates and prints the bill for a cellular telephone company. The company offers
two types of service: regular and premium. Its rates vary, depending on the type of service. The rates are
computed as follows:

Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20
per minute.

Premium service: $25.00 plus:

● For calls made during the day., the first 75 minutes are free; charges for more than 75 minutes are
$0.10 per minute.

● For calls made during the night, the first 100 minutes are free; charges for more than 100 minutes
are $0.05 per minute.

Your program should prompt the user to enter a service code (type char), and the number of minutes the
service was used.

A service code of r or R means regular service; a service code of p or P
means premium service. Treat any other character as an error. Your program
should output the type of service, the number of minutes the telephone service was used, and the
amount due from the user.
For the premium service, the customer may be using the service during the
day and the night(d or D for day and n or N for night). Therefore, to calculate the bill, you must
ask the user to input the number of minutes the service was used during the day and the number
of minutes the service was used during the night*/
main()
{
    float num1, num2,  p1, p2, p3,p4,p5;
    char type, dn;

    cout << "Enter which type of user you are(Regular or Preminum) select (r/p):";
    cin >> type;
    if (type == 'r')
    {
        cout << "Enter the min you used the service:";
        cin >> num1;
        if (num1 >= 50)
        {
            p1 = (num1 - 50) * 0.20 + 10;
            cout << "The charges are:"
                 << "$" << p1;
        }
        if (num1 < 50)
        {
            cout << "The charges are:"
                 << "$"
                 << "10";
        }
    }

    if (type == 'p')
    {
        cout << "(press D for day time or press N for night time) call:";
        cin >> dn;
        cout << "Enter the min you used the service:";
        cin >> num2;
        if (dn == 'n' && num2 >= 75)
        {
            p2 = (num2 - 75) * 0.10 + 25;
            cout << "The charge is:"
                 << "$" << p2;
        }
       

        }
        if (dn == 'd' && num2 >= 100)
        {
            p3 = (num2 - 100) * 0.05 + 25;
            cout << "The charge is:"
                 << "$" << p3;
        }
       
    }
