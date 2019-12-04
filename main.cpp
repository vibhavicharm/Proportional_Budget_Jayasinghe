/* 
Student: Vibhavi Jayasinghe
Course Name: Programming Fundermental 2
Teacher: Dr_T
Unit 8 Assignment: Proportional Budget
Date: 12-03-2019
*/
 
#include <iostream>
#include <string>

using namespace std;

int main() {

  double rent = 900;
  double electric = 100;
  double water = 55;
  double savings = 500;
  double entertainment = 50;
  double cloths = 83.33;
  double shoes = 12.50;
  double vendingMachine = 18;
  double creditCard = 200;
  double carPMT = 315;
  double carInsuarance = 88;
  double carGas = 90;
  double foodGroceries = 100;
  double foodDinningOut = 105;
  double cleaning = 12;
  double personalCare = 50;
  double charity = 100;
  double petcare = 100;
  double cellPhone = 100;
  double internet = 90;
  double streamming = 35;
  double amazon = 90;
  static const int p1 = 60;
  double p2 = 0.4;

  cout << "\nPerson 1\nrent = $" << rent * p1 << "\nelectric = $" << electric * p1 << "\nwater = $" << water * p1 << "\nsavings = $" << savings * p1 << "\nentertainment = $" << entertainment * p1 << "\ncloths = $" << cloths * p1 << "\nshoes = $" << shoes * p1 << "\nvendingMachine = $" << vendingMachine * p1 << "\ncreditCard = $" << creditCard * p1 << "\ncarPMT = $" << carPMT * p1 << "\ncarInsuarance = $" << carInsuarance * p1 << "\ncarGas = $" << carGas * p1 <<  "\nfoodGroceries = $" << foodGroceries * p1 << "\nfoodDinningOut = $" << foodDinningOut * p1 << "\ncleaning = $" << cleaning * p1 << "\npersonalCare = $" << personalCare * p1 << "\ncharity = $" << charity * p1 << "\npetcare = $" << petcare * p1 << "\ncellPhone = $" << cellPhone * p1 << "\ninternet = $" << internet * p1 << "\nstreamming = $" << streamming * p1 << "\namazon = $" << amazon * p1 << endl;
  cout << "Total = $" << rent * p1 + electric * p1 + water * p1 + savings * p1 + entertainment * p1 + cloths * p1 + shoes * p1 + vendingMachine * p1 + creditCard * p1 +  carPMT * p1 + carInsuarance * p1 + carGas * p1 + foodGroceries * p1 +  foodDinningOut * p1 +  cleaning * p1  + personalCare * p1 + charity * p1 + petcare * p1 + cellPhone * p1 + internet * p1 + streamming * p1 + amazon * p1 << endl;

  cout << "\n\nPerson 2\nrent = $" << rent * p2 << "\nelectric = $" << electric * p2 << "\nwater = $" << water * p2 << "\nsavings = $" << savings * p2 << "\nentertainment = $" << entertainment * p2 << "\ncloths = $" << cloths * p2 << "\nshoes = $" << shoes * p2 << "\nvendingMachine = $" << vendingMachine * p2 << "\ncreditCard = $" << creditCard * p2 << "\ncarPMT = $" << carPMT * p2 << "\ncarInsuarance = $" << carInsuarance * p2 << "\ncarGas = $" << carGas * p2 << "\nfoodGroceries = $" << foodGroceries * p2 << "\nfoodDinningOut = $" << foodDinningOut * p2 << "\ncleaning = $" << cleaning * p2 << "\npersonalCare = $" << personalCare * p2 << "\ncharity = $" << charity * p2 << "\npetcare = $" << petcare * p2 << "\ncellPhone = $" << cellPhone * p2 << "\ninternet = $" << internet * p2 << "\nstreamming = $" << streamming * p2 << "\namazon = $" << amazon * p2 << endl;
  cout << "Total = $" << rent * p2 + electric * p2 + water * p2 + savings * p2 + entertainment * p2 + cloths * p2 + shoes * p2 + vendingMachine * p2 + creditCard * p2 +  carPMT * p2 + carInsuarance * p2 + carGas * p2 + foodGroceries * p2 +  foodDinningOut * p2 +  cleaning * p2  + personalCare * p2 + charity * p2 + petcare * p2 + cellPhone * p2 + internet * p2 + streamming * p2 + amazon * p2 << endl;
}

    



 