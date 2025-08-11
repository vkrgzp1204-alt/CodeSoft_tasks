#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task> &tasks) {
    string desc;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, desc);
    tasks.push_back({desc, false});
    cout << "Task added successfully!\n";
}

void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\n--- To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

void markCompleted(vector<Task> &tasks) {
    int num;
    viewTasks(tasks);
    cout << "Enter task number to mark as completed: ";
    cin >> num;
    if (num >= 1 && num <= tasks.size()) {
        tasks[num - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void removeTask(vector<Task> &tasks) {
    int num;
    viewTasks(tasks);
    cout << "Enter task number to remove: ";
    cin >> num;
    if (num >= 1 && num <= tasks.size()) {
        tasks.erase(tasks.begin() + num - 1);
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: markCompleted(tasks); break;
            case 4: removeTask(tasks); break;
            case 5: cout << "Exiting program.\n"; return 0;
            default: cout << "Invalid choice. Try again.\n";
        }
    }
}

