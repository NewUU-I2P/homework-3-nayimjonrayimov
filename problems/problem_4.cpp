#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    if (macAddress [1]%2==0) {
        return "Unicast"; }
    else if (macAddress [1] == 'F') {
        return "Broadcast"; }
    else { return "Multicast";}
    

    // make use of control flow statements
    // return result;
}
