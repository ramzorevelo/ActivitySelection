// ActivitySelection

// You are given n activities, each defined by a start time and an end time.
// You need to select the maximum number of activities that don't overlap.
//
//
// Rules:
// Only one activity can be performed at a time.
// An activity is represented by its start and end times.
// Objective:
// Complete the code to solve the Activity Selection Problem using either:
//
// Brute Force (to explore all possible subsets of activities).
// Greedy Algorithm (to find the solution efficiently),
// or both.

#include <iostream>
#include <vector>
#include <algorithm>

// Activity structure
struct Activity {
    int start, end;
};

// Comparator function to sort activities by their end time
bool activityCompare(Activity a, Activity b) {
    return a.end < b.end;
}

// TODO: Implement the brute force solution
int bruteForceActivitySelection(std::vector<Activity>& activities) {
    // Complete this function
    return 0; // Placeholder
}

// TODO: Implement the greedy solution
int greedyActivitySelection(std::vector<Activity>& activities) {
    // Complete this function
    return 0; // Placeholder
}

int main() {
    std::vector<Activity> activities = {
        {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9}
    };

    std::cout << "Brute Force Solution: " << bruteForceActivitySelection(activities) << '\n';
    std::cout << "Greedy Solution: " << greedyActivitySelection(activities) << '\n';

    return 0;
}