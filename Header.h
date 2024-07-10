class Employee{
private:
	int employeID;
	char *name;
public:
	Employee(int id ,char* n);


	Employee operator+ (const Employee& obj);

	void display();
};