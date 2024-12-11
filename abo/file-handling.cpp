#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create an output file stream
    ofstream outfile("my_file.txt");

    // Check if the file was opened successfully
    if (!outfile.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Write some information to the file
    outfile << "This is the first line of text.\n";
    outfile << "This is the second line of text.\n";
    outfile << "This is the third line of text.\n";

    // Close the file
    outfile.close();

    // Open the file again as an input file stream
    ifstream infile("my_file.txt");

    // Check if the file was opened successfully
    if (!infile.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    // Read and print the contents of the file
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Close the file
    infile.close();

    return 0;
}
