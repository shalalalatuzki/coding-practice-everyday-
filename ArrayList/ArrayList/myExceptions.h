#ifndef myExceptions_
#define myExceptions_
#include<iostream>
#include<string>
using namespace std;
class illegalParameterValue {
	public:
		illegalParameterValue(string theMessage="illegal parameter value ") {
			message = theMessage;
		}
		void outputMessage() {
			cout << message << endl;
		}
	private:
		string message;
};
class illegalInputData {
	public:
		illegalInputData(string theMessage="illegal data input" ) {
			message = theMessage;
		}
		void outputMessage() {
			cout << message << endl;
		}
	private:
		string message;
};
class illegalIndex {
	public:
		illegalIndex(string theMessage="illegal index") {
			message = theMessage;
		}
		void outputMessage() {
			cout << message << endl;
		}
	private:
		string message;
};
class matrixIndexOutOfBounds
{
public:
	matrixIndexOutOfBounds
	(string theMessage = "Matrix index out of bounds")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// matrix size mismatch
class matrixSizeMismatch
{
public:
	matrixSizeMismatch(string theMessage =
		"The size of the two matrics doesn't match")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// stack is empty
class stackEmpty
{
public:
	stackEmpty(string theMessage =
		"Invalid operation on empty stack")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// queue is empty
class queueEmpty
{
public:
	queueEmpty(string theMessage =
		"Invalid operation on empty queue")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// hash table is full
class hashTableFull
{
public:
	hashTableFull(string theMessage =
		"The hash table is full")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// edge weight undefined
class undefinedEdgeWeight
{
public:
	undefinedEdgeWeight(string theMessage =
		"No edge weights defined")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

// method undefined
class undefinedMethod
{
public:
	undefinedMethod(string theMessage =
		"This method is undefined")
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};
#endif


