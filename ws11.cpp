#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    
    void read(Records &records) {
        try {
            _file.open(_filename, ios::in);
            if (!_file.is_open()) {
                throw runtime_error("Error: Could not open the file: " + _filename);
            }

            string line;
            int lineNumber = 0;
            while (getline(_file, line)) {
                lineNumber++;
                try {
                    size_t pos;
                    int value = stoi(line, &pos);
                    if (pos < line.size()) {
                        _file.close();
                        throw invalid_argument("Invalid input format in file: " + _filename + " at line " + to_string(lineNumber));
                    }
                    records.push_back(value);
                } catch (const invalid_argument&) {
                    _file.close();
                    throw; // Re-throw the exception to propagate it one level up
                } catch (const out_of_range&) {
                    _file.close();
                    throw; // Re-throw the exception to propagate it one level up
                }
            }

            _file.close();
        } catch (const exception& e) {
            if (_file.is_open()) {
                _file.close();
            }
            throw; // Re-throw the exception to propagate it to the caller (main)
        }
    }
};

int main() {
    try {
        RecordsManager recordM("test_corrupt2.txt");
        Records myRecords;

        // reads records
        recordM.read(myRecords);

        // calculate and print out the sum
        int sum = 0;
        for (size_t i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << "Sum of records: " << sum << endl;

    } catch (const invalid_argument& e) {
        cerr << "Invalid argument error: " << e.what() << endl;
        return 1; // Return non-zero to indicate error
    } catch (const out_of_range& e) {
        cerr << "Out of range error: " << e.what() << endl;
        return 1; // Return non-zero to indicate error
    } catch (const exception& e) {
        cerr << "Exception occurred: " << e.what() << endl;
        return 1; // Return non-zero to indicate error
    }

    return 0;
}

