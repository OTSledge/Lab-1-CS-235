#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include "TodoList.h"
using namespace std;

int main(int argc, char *argv[]) {
vector <TodoList> listVector;

ofstream output ("TODOList.txt");
for(int i = 0; i < argc; i++){
	cout << "argv[" << i << "]=" << argv[i] <<endl;
}
string firstarg = argv [1];

if(firstarg.compare("add")==0) {
	output << "adding task"<< endl;
	string secondarg = argv [2];
	string thirdarg = argv [3];
	listVector.add(secondarg, thirdarg);
}

else if(firstarg.compare("remove")==0) {
	cout << "removing task"<< endl;
	string secondarg = argv [2];
	listVector.remove(secondarg);
}

else if(firstarg.compare("printList")==0) {
	cout << "printing list"<< endl;
	listVector.PrintList();
}

else if(firstarg.compare("printDay")==0) {
	cout << "printing day"<< endl;
	string secondarg = argv [2];
	listVector.PrintDay(secondarg);
} 

else{
	cout << "enter valid input" << endl;
}


	return 0;
}

