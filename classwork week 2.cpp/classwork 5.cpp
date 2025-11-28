#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string name;
    bool isPauStudent;

    cout<<"Enter full name ===> ";
    getline(cin,name);

    cout<<"Is PAU Student? (1 for true, 0 for false)";
    int flag;
    cin>> flag;
    isPauStudent = (flag !=0);
    cout<<"Enter course (1-5) : \n"<< "1...Photography \n"<< "2...Painting \n"<<"3....Fishing \n"<<"4....Baking \n"<<"5....Public Speaking \n";
    cin>>course;

    cout<<"Enter location (1-5): \n "<<"1 -- Camp house A \n"
        << "2 -- Camp house B \n"<< "3 -- Camp house C \n"
        << "4 -- Camp house D \n"<< "5 -- Camp house E \n"
    cin>>location;
     
    // Question 2
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if (course == 1){
       courseName = "Photography";
       days = 3;
       regFee = 10000;
    }else
    if (course == 2){
       courseName = "Painting";
       days = 5;
       regFee = 8000;
    }else
    if (course == 3){
       courseName = "Fishing";
       days = 7;
       regFee = 15000;
    }else
    if (course == 4){
       courseName = "Baking";
       days = 5;
       regFee = 13000;
    }else
    if (course == 5){
       courseName = "Public Speaking";
       days = 2;
       regFee = 5000;
    }
    else{
        cout<<"Invalid course selection \n";
        return 1;
    }

//LOcation code
  string locName;
  double lodgingPerDay = 0.0;

 if(location == 1){
    locName = "Camp House A";
    lodgingPerDayn= 10000;

 }
 else if(location == 2){
    locName = "Camp House B";
    lodgingPerDayn= 2500;

 }
 else if(location == 3){
    locName = "Camp House C";
    lodgingPerDayn= 5000;

 }
 else if(location == 4){
    locName = "Camp House D";
    lodgingPerDayn= 13000;

 }
 else if(location == 5){
    locName = "Camp House E";
    lodgingPerDayn= 5000;

 }
 else {
    cout<<"Invalid location selection. \n";
    return 1;
 }
 // Question 3
 double lodgingcost = lodgingPerDay * days;
 double lodgingDiscount = 0.0;

 if (isPauStudent && (location == 1 ||location == 2)){
    lodgingDiscount = 0.05 * lodgingcost;

 }
 double lodgingcostAfter = lodgingcost - lodgingDiscount;

 If((days> 5)||(regFee > 12000)){
    regDiscount = 0.03 * regFee;
 }
   double regFeeAfter = regFee - regDiscount;
 double total = regFee + lodgingcostAfter;

 //Random promo
 srand(time(0));
 int r = (rand()%100) + 1;
 double promo = 0.0;
 if (r==7 || r==77){
    promo = 500.0;
 }

    cout<<"Name: "<<name;
    cout<<"PAU student: "<<(isPauStudent ? "YES" : "NO")<< "\n";
    cout<<"Course: "<<courseName<<"\n";
    cout<< "Number of days: "<<days<<"\n";
    cout<< "Registration Fee: "<<regFee<<"\n";
    cout<< "Location: "<<locName<<"\n";
    cout<< "Random Number: "<<locName<<"\n";
    cout<< "Lodging Fee Per day: "<<lodgingPerDay<<"\n";
    cout<<"Total lodging cost: "<<lodgingcost<<'\n';
    cout<<"Total Fee: "<<total<<"\n";
   // cout<<name;

    
    return 0;
}