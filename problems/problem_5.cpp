float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
cout << "First number: " << endl;
cin >>x;
cout << "Second number: " << endl;
cin >>y;
cout <<"Enter operation: ";
cin >> operation;
if (operation=='+')
cout << "sum: " << x+y << endl;
else if (operation=='-')
cout << "subtraction: " << x-y << endl;
else if (operation=='*')
cout << "multiplication: " << x*y << endl;
else if (operation=='/')
cout << "division: " << x/y << endl;
else
cout << "wrong operator\n";


   return result;
}
