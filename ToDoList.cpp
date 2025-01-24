// To Do list in cpp using vectors.
#include<bits/stdc++.h>
using namespace std;

vector <string> tasks;
vector <string> completed;



void Addtask(){
    string task;

    cout << "Task : ";
    cin.ignore();
    getline(cin, task);

    tasks.emplace_back(task);
    cout << "\nTask added successfully\n\n";
}


void Viewtask(){

    int i = 1;
    cout << "Tasks To-Do: " << endl;
    for(vector<string> ::iterator itask = tasks.begin(); itask != tasks.end(); itask++){
        cout << i << ". " << *(itask) << endl;
        i++;
    }

    cout << "\n";

    i = 1;
    cout << "Tasks Marked as Complete: " << endl;
    for(vector<string> ::iterator icomp = completed.begin(); icomp != completed.end(); icomp++){
        cout << i << ". " << *(icomp) << endl;
        i++;
    }

    cout << "\n\n";
}


void Markcomp(){
    int tasknum;
    cout << "Enter the task number to be marked as completed : ";
    cin >> tasknum;

    completed.emplace_back(tasks[tasknum]);
    tasks.erase(tasks.begin() + tasknum - 1);

    cout << "Task Marked as Completed!";
    cout << "\n\n";

}


void Deltask(){
    int tasknum;
    cout << "Enter the task number to be deleted : ";
    cin >> tasknum;

    tasks.erase(tasks.begin() + tasknum - 1);
}


int main(){
    int n;
    do {
        cout << "\t----------Menu----------" << endl;
        cout << "\t 1 -> Add a new task." << endl;
        cout << "\t 2 -> View all task." << endl;
        cout << "\t 3 -> Mark a task as completed." << endl;
        cout << "\t 4 -> Delete a task." << endl;
        cout << "\t 5 -> Exit the menu" << endl;

        cout << "\nEnter a Choice: " << endl;
        cin >> n;

        switch(n){
            case 1: {
                Addtask();
                break;
            }

            case 2: {
                Viewtask();
                break;
            }

            case 3: {
                Markcomp();
                break;
            }

            case 4: {
                Deltask();
                break;
            }

            case 5: {
                cout << "Exiting...";
                break;
            }
            default:
                cout << "Not a valid choice, try again..!";
                cout << "\n\n";
        }

    }while(n != 5);
    cout << "Thank You for using!!!";
}
