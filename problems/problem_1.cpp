float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
//cout << "Enter the consumption\n";
//cin >> cost;
if (consumed_water >= 0 && consumed_water<= 30)
cost= 13 + consumed_water * 0.4;
else if (consumed_water>30 && consumed_water<= 50)
cost = 13 + 30 * 0.4 + (consumed_water-30) * 0.12;
else if (consumed_water>50 && consumed_water<=60)
cost = 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water-50) *0.4;
else if (consumed_water>60)
cost = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5;
//cout << "The total cost is: " << cost << endl;




    return cost;
}
