#include <iostream>
#include <bitset>
#include <vector>
#include <sstream>

using namespace std;

string toBinary(int n) {
    return bitset<8>(n).to_string();
}

string convertToBinary(const string& ip) {
    stringstream ss(ip);
    string segment;
    vector<int> segments;

    while (getline(ss, segment, '.')) {
        segments.push_back(stoi(segment));
    }

    string binaryIP = "";
    for (int i = 0; i < 4; ++i) {
        binaryIP += toBinary(segments[i]) + ".";
    }

    binaryIP.pop_back(); // Remove last dot
    return binaryIP;
}

string getClass(int firstOctet) {
    if (firstOctet >= 1 && firstOctet <= 127) return "Class A";
    if (firstOctet >= 128 && firstOctet <= 191) return "Class B";
    if (firstOctet >= 192 && firstOctet <= 223) return "Class C";
    if (firstOctet >= 224 && firstOctet <= 239) return "Class D";
    return "Class E";
}

int main() {
    string ip = "216.10.18.1";
    stringstream ss(ip);
    string segment;
    vector<int> segments;

    while (getline(ss, segment, '.')) {
        segments.push_back(stoi(segment));
    }

    // Convert to binary
    string binaryIP = convertToBinary(ip);
    cout << "Binary: " << binaryIP << endl;

    // Class determination
    string ipClass = getClass(segments[0]);
    cout << "Class: " << ipClass << endl;

    // Network and Broadcast (assumed Class C here)
    string network = to_string(segments[0]) + "." + to_string(segments[1]) + "." + to_string(segments[2]) + ".0";
    string broadcast = to_string(segments[0]) + "." + to_string(segments[1]) + "." + to_string(segments[2]) + ".255";

    cout << "Network: " << network << endl;
    cout << "Broadcast: " << broadcast << endl;

    return 0;
}
