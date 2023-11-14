float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;

//cout << "Enter three numbers\n";
//cin >> i >> j >> k;
result = (i>j && i>k) ? i : (j>i && j>k) ? j : k;
//cout << result << endl;
 


    return result;
}
