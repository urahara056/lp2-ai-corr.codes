#include <iostream>
#include <string>

using namespace std;

// Structure to represent employee information
struct Employee {
    string name;
    int attendanceScore;
    int productivityScore;
    int qualityScore;
};

// Function to evaluate employee performance based on rules
string evaluatePerformance(const Employee& emp) {
    int totalScore = emp.attendanceScore + emp.productivityScore + emp.qualityScore;

    // Evaluate performance based on total score
    if (totalScore >= 80) {
        return "Excellent performance!";
    } else if (totalScore >= 60) {
        return "Good performance.";
    } else if (totalScore >= 40) {
        return "Average performance.";
    } else {
        return "Poor performance. Needs improvement.";
    }
}

int main() {
    Employee emp;

    // Prompt user to enter employee information
    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter attendance score (out of 100): ";
    cin >> emp.attendanceScore;

    cout << "Enter productivity score (out of 100): ";
    cin >> emp.productivityScore;

    cout << "Enter quality score (out of 100): ";
    cin >> emp.qualityScore;

    // Evaluate employee performance
    string performance = evaluatePerformance(emp);

    // Display evaluation result
    cout << "\nEmployee Name: " << emp.name << endl;
    cout << "Performance Evaluation: " << performance << endl;

    return 0;
}

