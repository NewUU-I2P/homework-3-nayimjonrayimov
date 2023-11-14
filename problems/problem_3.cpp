#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

cout << "Enter your sex (M or F) and height, correspondingly:\n ";
cin >> S >> height;
if ( (S == 'M' && height>=1.85) || (S == 'F' && height>=1.75))
cout << "Tall\n";
else if ( (S == 'M' && height>=1.70) || (S== 'F' && height>=1.60))
cout << "Normal\n";
else if ((S == 'M' && height<1.70) || (S == 'F' && height<1.60))
cout << "Short\n";
else
cout << "Invalid output";

    return 0;


    // use return to return your result
    // make use of control flow statements
}
