#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Fixed values
    const double baseTuition = 1500000;
    double hostelFee = 0;
    double tuitionScholarship = 0;
    double meritGrant = 0;

    // Inputs
    string name;
    int jamb, age, hostel;
    bool firstchoice, disciplinary;
    double waec;

    cout << "Please enter your full name: ";
    getline(cin, name);

    cout << "Please enter your JAMB score: ";
    cin >> jamb;

    cout << "Please enter your WAEC average: ";
    cin >> waec;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Was PAU your first choice? (1 = Yes, 0 = No): ";
    cin >> firstchoice;

    cout << "Any disciplinary record? (1 = Yes, 0 = No): ";
    cin >> disciplinary;

    cout << "Kindly input your desired hostel" << endl ;
    cout << " 1 = Main hostel -#180 000 " << endl ;
    cout << " 2 = Annex hostel -#120 000" << endl;
    cout << " 3 = Day student -#0 ";
    cin >> hostel;

    
    // TASK 1: ADMISSION 
    string admissionstatus;
    if ((jamb >= 220 && waec >= 60 && firstchoice == 1) ||
             (jamb >= 200 && waec >= 70)) {
                admissionstatus = "Admitted";
         cout<< "Congratulations, you have been admitted!";
    }


    else if (disciplinary == 1 || age < 15) {
        admissionstatus = "Rejected";
        cout<<"Sorry, you have been rejected";
    }
   
    else {
        admissionstatus = "Pending";
        cout<<"Your admissin status is still pending";
    }


    // TASK 1:SCHOLARSHIP (only if admitted)
    if (admissionstatus == "Admitted") {
        if (jamb >= 320)
            tuitionScholarship = 30;
        else if (jamb >= 280)
            tuitionScholarship = 20;
        else if (jamb >= 240)
            tuitionScholarship = 10;
            else tuitionScholarship = 0;

        // Bonus rule
        if (waec >= 80 && firstchoice == 1)
            tuitionScholarship += 5;

        // Cap at 35%
        if (tuitionScholarship > 35)
            tuitionScholarship = 35;
    }

    double tuitionAfterScholarship =
        baseTuition - (tuitionScholarship / 100 * baseTuition);

    
    //TASK3: HOSTEL DECISION
    string hostelName;

    if (admissionstatus == "Admitted") {
        if (hostel == 1) {
            hostelName = "Main Hostel";
            hostelFee = 180000;
        } else if (hostel == 2) {
            hostelName = "Annex Hostel";
            hostelFee = 120000;
        } else {
            hostelName = "Day Student";
            hostelFee = 0;
        }
    }
    else if (admissionstatus == "Pending") {
        hostelName = "Hold On";
        hostelFee = 0;
    }
    else { // Rejected
        hostelName = "Not Applicable";
        hostelFee = 0;
    }

    
    // TASK 4:RANDOM MERIT GRANT
    srand(time(0));
    int r = rand() % 100 + 1;

    bool isPrime = (
        r==2||r==3||r==5||r==7||r==11||r==13||r==17||r==19||r==23||r==29||
        r==31||r==37||r==41||r==43||r==47||r==53||r==59||r==61||r==67||
        r==71||r==73||r==79||r==83||r==89||r==97
    );

    if (admissionstatus == "Admitted" && isPrime)
        meritGrant = 50000;

    
    // TASK 5:TOTALS
    double totalPayable = tuitionAfterScholarship + hostelFee - meritGrant;
    if (totalPayable < 0)
        totalPayable = 0;

    
    //TASK 6: OUTPUTS
    cout << "\n YOUR OUTPUT IS: \n";
    cout << "Name: " << name << endl;
    cout << "Admission Status: " << admissionstatus << endl;
    cout << "Scholarship: " << tuitionScholarship << "% ....Tuition After Scholarship: ₦" << tuitionAfterScholarship << endl;
    cout << "Hostel: " << hostelName << "   Fee: #" << hostelFee << endl;
    cout << "Random draw: " << r << "   Merit Grant: #" << meritGrant << endl;
    cout << "TOTAL PAY: #" << totalPayable << endl;

    return 0;
}
