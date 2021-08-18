// #include <iostream>

// using namespace std;

// int main() 
// {
//   cout << "Hello World!" << endl;
//   return 0;
// }

// // ********************************veriable**************************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//   string name = "Jhon";
//   int age = 35;

//   cout << "hello" << name << endl;
  
//   return 0;
// }


// // *****************************************DataTypes*********************************************


// #include <iostream>

// using namespace std;

// int main()
// {
//   char grade = 'A'; 
//   string phrase = "Hello world"; 
//   int age = 50;
//   float floatNumber = 4.3;
//   double gpa = 2.34;
//   bool alive = true;

//   return 0;
// }



// //*********************************************output input*********************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//   int age;
//   cout << "Enter your age: ";
//   cin >> age;
//   cout << "your are " << age << " year old" << endl;

//   // if you want to get string velue from user
//   string name;
//   cout << "Enter your Name: ";
//   getline(cin, name);
//   cout << "hello " << name;

//   return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//   string color, pluralNoun, celebrity;
  
//   cout << " Enter a color: ";
//   getline(cin, color);

//   cout << "Enter a plural noun: ";
//   getline(cin, pluralNoun);

//   cout << "Enter a celebrity name: ";
//   getline(cin, celebrity);


//   cout << "Roses are " << color << endl;
//   cout << pluralNoun << "are blue" << endl;
//   cout << "I love " << celebrity" << endl;

//   return 0;
// }


// *********************************************Arrey = in python its called list*********************************************

// #include <iostream>

// using namespace std;

// int main() 
// {
//   int luckyNumbers[] = {1, 4, 4, 3, 45, 23, 123,};
  
//   cout << luckyNumbers[0] << endl;



//   return 0;
// }

// *********************************************Function*********************************************

// #include <iostream>

// using namespace std;

// void sayHi(string name, int age);

// int main() 
// {
//   cout << "top\n";
//   sayHi("sumon", 21);
//   cout << "botom"<< endl;
//   return 0;
// }

// void sayHi(string name, int age) {
//   cout << "hello world" << name << "your are "<< age << endl;
// }

// Return function

// #include <iostream>
// using namespace std;


// double cube(double num) {
//   double result = num * num * num;
//   return result;
//   // return num * num * num;
// }



// int main () {
//   double answer = cube(6.0);
//   cout << answer << endl;

//   // cout << cube(6.0)<< endl;
//   return 0;
// }



// *********************************************if statement*********************************************

// #include <iostream>
// using namespace std;

// int main() {
//   bool isMale = true;
//   bool isTall = true;
//   if (isMale && isTall) {               // && and oprator 
//     cout << "You Are a tall male\n";    // || or oprator
//   } else if (isMale && !isTall) {
//     cout << "you are a short male";
//   } else if (!isMale && isTall) {
//     cout << "you are tall but not a male\n"
//   } else {
//     cout << "you are not male\n";
//   }



//   return 0;
// }

// *********************************************comparism if statements*********************************************

// #include <iostream>

// using namespace std;

// int getMax (int num1, int num2, int num3) {
//   int result;
  
//   if (num1 >= num2 && num1 >= num3) {
//     result = num1;
//   }else if (num2 >= num1 && num2 >= num3) 
//   {
//     result = num2;
//   }else {
//     result = num3;
//   }
  

//   return result;
// }

// int main() {
//   cout << getMax(4, 5, 6) << endl;

//   return 0;
// }


// *********************************************switch statements*********************************************

// #include <iostream>
// using namespace std;

// string getDayOfWeek(int dayNum) {
//   string dayName;
//   switch(dayNum)
//   {
//     case 0:
//       dayName = "Sunday";
//       break;
//     case 1:
//       dayName = "Monday";
//       break;
//     case 2:
//       dayName = "Tuesday";
//       break;
//     case 3:
//       dayName = "Wednesday";
//       break;
//     case 4:
//       dayName = "Thursday";
//       break;
//     case 5:
//       dayName = "Friday";
//       break;
//     case 6:
//       dayName = "Saturday";
//       break;
//     default:
//       dayName = "Invalid Day Number";
//   }

//   return dayName;
// }


// int main() {
//   cout << getDayOfWeek(12);
//   return 0;
// }


// *********************************************While loop*********************************************


// #include <iostream>
// using namespace std;


// int main(){
//     int index = 1;
//     while(index <= 5) {
//         cout << index << endl;
//         index++;
//     }
//     return 0;
    
// }

// *********************************************do while loop*********************************************

// #include <iostream>
// using namespace std;


// int main(){
//     int index = 1;
//     do {
//         cout << index << endl;
//         index++;
//     }
//     while(index <= 5);
//     return 0;
    
// }



// *********************************************For loop*********************************************



// #include <iostream>
// using namespace std;

// int main() 
// {
//     // int index = 1;
//     // while (index <= 5) {
//     //     cout << index << endl;
//     //     index++;
//     // }


//     // for (int i = 1; i <= 5; i++) {
//     //     cout << i << endl;
//     // }

//     int nums[] = {1, 3, 7, 34, 2};

//     for (int i = 0; i < 5; i++) {
//         cout << nums[i] << endl;
//     }

//     return 0;
// }



// *********************************************exponent funtion*********************************************


// #include <iostream>

// using namespace std;

// int power(int baseNum, int powNum) {
//     int result = 1;

//     for(int i = 0; i < powNum; i++){
//         result = result * baseNum;
//     }


//     return result;
// }


// int main() {

//     cout << power(2, 3);


//     return 0;
// }


// *********************************************2d arrey*********************************************

// #include <iostream>
// using namespace std;


// int main() {

//     int numberGrid[3][2] = {
//         {1, 2}, 
//         {3, 4},
//         {5, 6}
//     };
//     cout << numberGrid[0][1];


//     return 0;
// }



// *********************************************nested for loop*********************************************

// #include <iostream>
// using namespace std;


// int main() {
//     int numberGrid[3][2] = {
//         {1, 2}, 
//         {3, 4},
//         {5, 6}
//     };

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++){
//             cout << numberGrid[i][j];
//         }
//         cout << endl;
//     }



//     return 0;

// }




// *********************************************pointer*********************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 19;
//     double gpa = 2.7;
//     string name = "Mike";

//     return 0;
// }