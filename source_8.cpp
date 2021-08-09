/*
#include <iostream>
using namespace std;

// ���Ḯ��Ʈ�� �̿��� ������ �⺻ �Լ� ����, ��� ���� �׽�Ʈ
#define element int

class Node {
public:
	element data;
	Node* link;
};

Node* SP = NULL;	// Stack Pointer

bool is_stack_empty() {
	return (SP == NULL);
}

void push(element data) {
	// ���ο� ��带 ù ���� �߰�
	Node* new_node = new Node;
	new_node->data = data;
	// new_node->link = NULL;

	new_node->link = SP;	// SP�� �߰��Ǳ� ������ ù ��° ��带 ����Ű�� �־����Ƿ�
	SP = new_node;			// SP�� �ٽ� ù ��° ���(���� ���� ���� ���߿� �߰��� ���)�� ����Ű�� ��
}

element pop() {
	if (is_stack_empty()) {
		cout << "ERROR: Stack Empty" << endl;
		return -1;		// exit();
	}
	else {
		element item = SP->data;
		SP = SP->link;	// SP�� ������ ���󰡰� ��
		return item;
	}
}

element peek() {
	if (is_stack_empty()) {
		cout << "ERROR: Stack Empty" << endl;
		return -1;		// exit();
	}
	else {
		return SP->data;
	}
}

void print_stack() {
	cout << "STACK STATUS" << endl;

	if (is_stack_empty()) return;
	else {
		for (Node* ptr = SP; ptr != NULL; ptr = ptr->link)
			cout << ptr->data << endl;
	}
}


void main()
{
	push(10);
	push(20);
	push(30);
	pop();
	print_stack();

	push(40);
	push(50);
	pop();
	push(60);
	print_stack();
}
*/