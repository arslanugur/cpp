#include <iostream>
using namespace std;
int main()
{
int from , to;
float value;

cout<<"Temperature Conversion\n";
cout<<"Enter no of Unit to covert from : \n 1.celcius\n 2. Farenheit\n 3. Kelvin";
cin>>from;

cout<<"Enter no of Unit to covert to : \n 1.celcius\n 2. Farenheit\n 3. Kelvin";
cin>>to;

cout<<"Enter The value to convert: ";
cin>>value;

/converting given value from specified unit to Kelvin/
switch(from) {
case 1:
value= value + 273.15; break;
case 2:
value= (value+459.67)*5/9; break;
case 3: break;
default: break;
}

/converting value from Kelvin to specified unit/
switch(to) {
case 1:
value= value-273.15; break;
case 2:
value= value*9/5-459.67; break;
case 3: break;
default: break;
}

cout<<"Converted Value :"<< value;
}

/*
Output:
Temperature Conversion                                                             
Enter no of Unit to covert from :                                                  
 1.celcius                                                                         
 2. Farenheit                                                                      
 3. Kelvin                                                                         
2                                                                                  
Enter no of Unit to covert to :                                                    
 1.celcius                                                                         
 2. Farenheit                                                                      
 3. Kelvin                                                                         
1                                                                                  
Enter The value to convert: 45                                                     
Converted Value: 7.22222
*/


