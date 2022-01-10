#ifndef TODO_LIST_H
#define TODO_LIST_H

#include <string>
#include <iostream>
#include "TodoListInterface.h"
using namespace std;


class TodoList : public TodoListInterface {
	public:
		TodoList() {
			cout << "In Constructor" << endl;
		}
		virtual TodoList() {
			cout << "In Destructor" << endl;
		}
			/*
			*   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
			*/
		virtual void add(string _duedate, string _task){
			string date = _duedate;
			string task = _task;
			PrintToFile();
		}





			/*
			*   Removes an item from the todo list with the specified task name
			*



			*   Returns 1 if it removes an item, 0 otherwise
			*/
		virtual int remove(string _task){
			for (i )
		}

		void PrintToFile(){
				for (int i = 0; i < List.size(); ++i){
				output << _task << endl;
			}
			output << endl << endl;
		}




			/*
			*   Prints out the full todo list to the console
			*/
		virtual void TList()
			
		for (int i = 0; i < List.size(); ++i){
			output << _task << endl;
		}

			/*
			*   Prints out all items of a todo list with a particular due date (specified by _duedate)
			*/
		virtual void printDaysTasks(string _date)
		for (int i = 0; i < List.size(); ++i){
			if (_date == _duedate.at[i]{
				cout << _task
			}
		}
	}
}

#endif
