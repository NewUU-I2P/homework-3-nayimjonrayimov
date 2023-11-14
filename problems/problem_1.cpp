void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
int a;
cout << "Enter the consumption\n";
cin >> cost;
if (a < 0)
cout << "Invalid value\n";
else if (a >= 0 && a<= 30)
cost= 13 + p * 0.4;
else if (a>30 && a<= 50)
cost = 13 + 30 * 0.4 + (p - 30) * 0.12;
else if (a>50 && a<=60)
cost = 13 + 30 * 0.4 + 20 * 0.12 + (p-50) *0.4;
else 
cost = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (p - 60) * 1.5;
cout << "The total cost is: " << cost << endl;




    return cost;
}
