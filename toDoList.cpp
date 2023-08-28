/******************************************************************************************************************************
 Task 4: Build a simple console-based to-do list manager that allows users to add, view, and delete tasks
 *******************************************************************************************************************************/

/*The code starts by declaring a list of tasks. The type of the list is "list<Task>". The addTask function takes in a list and title as arguments. 
It adds the task to the end of the list, with its title being "title". viewTasks prints out all of the tasks in order from beginning to end. 
markTaskAsCompleted marks any task that has been completed as such, using an index number for which it was added to the list (index 0). 
removeTask removes any given task from its position in the list (index 1). main calls viewTasks followed by markTaskAsCompleted before exiting.*/

#include <iostream>
#include <list>

using namespace std;

struct Task
{
    string title;
    bool done;
};

void addTask(list<Task> &tasks, string title); 
void viewTasks(const list<Task> &tasks);
void markTaskAsCompleted(list<Task> &tasks, int index);
void removeTask(list<Task> &tasks, int index);

int main()
{
    list<Task> tasks;
    int ch;

    do
    {
        cout << "----------------------------------------------------------------" << endl;
        cout << "Console-Based To-Do List Program..." << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << "Enter your Choice Here : ";
        cin >> ch;
        system("cls");
        switch (ch)
        {
        case 1:
        {
            string title;
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, title);
            addTask(tasks, title);
            break;
        }
        case 2:
        {
            viewTasks(tasks);
            break;
        }
        case 3:
        {
            int index;
            cout << "Enter the index of the task you want to mark as completed : ";
            cin >> index;
            markTaskAsCompleted(tasks, index);
            break;
        }
        case 4:
        {
            int index;
            cout << "Enter the index of the task you want to remove : ";
            cin >> index;
            removeTask(tasks, index);
            break;
        }
        case 5:
        {
            cout << "Exiting program..." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
        }

    } while (ch != 5);

    return 0;
}
void addTask(list<Task> &tasks, string title)
{
    Task newTask;
    newTask.title = title;
    newTask.done = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}
void viewTasks(const list<Task> &tasks)
{
    cout << "Task List : " << endl;
    int count = 1;
    for (const Task &task : tasks)
    {
        cout << count << ". [" << (task.done ? "Completed" : "Pending") << "] " << task.title << endl;
        count++;
    }
}
void markTaskAsCompleted(list<Task> &tasks, int index)
{
    int count = 1;
    for (Task &task : tasks)
    {
        if (count == index)
        {
            task.done = true;
            cout << "Task marked as done!" << endl;
            return;
        }
        count++;
    }
    cout << "Task not found!" << endl;
}
void removeTask(list<Task> &tasks, int index)
{
    int count = 1;
    for (auto it = tasks.begin(); it != tasks.end(); ++it)
    {
        if (count == index)
        {
            tasks.erase(it);
            cout << "Task removed successfully!" << endl;
            return;
        }
        count++;
    }
    cout << "Task not found!" << endl;
}