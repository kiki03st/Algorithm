#include <iostream>
#include <string>

using namespace std;

struct node{
	node *next;
	int index;
	string name;
};

class list{
	private:
		node *root;
		node *present;
		int len;
	public:
		list(){
			len = 0;
		}
		void append(string name){
			if(!len){
				len++;
				root = new node();
				root -> next = NULL;
				root -> index = 0;
				root -> name = name;
				present = root;
			}
			else{
				node *p = new node();
				p -> next = NULL;
				p -> index = present -> index + 1;
				p -> name = name;
				present -> next = p;
				present = present -> next;
			}
		}
};

class dict{
};

int main(){
	return 0;
}
