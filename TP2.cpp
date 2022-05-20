#define CRT_SECURE_NO_WARNINGS
#include "coord.h"
#include "queue.h"
#include <iostream>
using namespace std;



void CoordInizilization(Coord& obj)
{
	int x, y, z;
	cout << "������� x ����������: " << endl;
	cin >> x;
	cout << "������� y ����������: " << endl;
	cin >> y; 
	cout << "������� z ����������: " << endl; 
	cin >> z;  
	system("cls");
	obj.Inizilization(x, y, z);

}

void ShowCoord(Coord& obj)
{
	obj.GetCoord();
}

void UnaryPostfixOperations(Coord& obj)
{
	cout << "����� ��������� �� ������ ���������������?" << endl; int choice;
	cout << "1 - ����������� ��������� (item++) (��������� ���� �� ������� ���������� �� ������������ �����)" << endl;
	cout << "2 - ����������� ��������� (item--) (��������� ���� �� ������� ���������� �� ����������� �����)" << endl;
	cin >> choice;
	system("cls");
	int a;
	switch (choice)
	{
	case 1:

		obj++;

		system("cls"); break;
	case 2:

		obj--;

		system("cls"); break;
	}



}


void UnaryPrefixOperator(Coord& obj)
{
	cout << "����� ��������� �� ������ ���������������?" << endl; int choice;
	cout << "1 - ���������� ��������� (++item) (��������� ���� �� ������� ���������� �� �������� �����)" << endl;
	cout << "2 - ���������� ��������� (--item) (�������� ���� �� ������� ���������� �� �������� �����)" << endl;
	cin >> choice;
	system("cls");
	int a;
	switch (choice)
	{
	case 1: 
		++obj;

		system("cls"); break;

	case 2: 

		--obj;

		system("cls"); break;
	}

}




void FirstTask(Coord* CoordList)
{
	int work = 1;
	int MenuSection;
	int CoordListSection = 0;
	while (work)
	{
		cout << "<---------- ������� ���� ---------->" << endl;
		cout << "1: ���� �������� ���������" << endl;
		cout << "2: �������� ���������" << endl;
		cout << "3: ������� �����������  ��������" << endl;
		cout << "4: ������� ���������� ��������" << endl;
		cout << "5: ������� � ������ �������" << endl;
		cout << "6: ����� �� ���������" << endl;
		cin >> MenuSection;
		system("cls");
		switch (MenuSection)
		{
		case 1:CoordInizilization(CoordList[CoordListSection]); break;
		case 2:ShowCoord(CoordList[CoordListSection]); break;
		case 3:UnaryPostfixOperations(CoordList[CoordListSection]); break;
		case 4:UnaryPrefixOperator(CoordList[CoordListSection]); break;
		case 5:work = 0; break;
		case 6:exit(0); break;


		}
	}

}



void SecondTask(Queue* QueList)
{
    
	int work=999, MenuSection;
	int queue_size = 0, value = 0;

	cout << "������� ������:\n";
	cin >> queue_size;


	cout << "������� ��������: " << endl;
	cin >> value;
	Queue st(value);
	Queue qw(value);
	for (int i = 0; i < queue_size - 1; i++)
	{
		cin >> value;
		st.push(value);
	}
	for (int i = 0; i < queue_size - 1; i++)
	{
		cin >> value;
		qw.push(value);
	}
	value = 0;
	st + qw;
    while (work)
    {
		system("cls");
        cout << "<---------- ������� ���� ---------->" << endl;
        cout << "1 - �������� ����� �������" << endl;
        cout << "2 - ������� ������� � ������" << endl;
        cout << "3 - ������� ��� ��������" << endl;
        cout << "4 - �������������� �������� � ���������" << endl;
        cout << "5 - �������������� �������� ������ �������" << endl;
        cout << "6 - �������� �������� �� �������" << endl;
        cout << "0 - ����� � ����� �������" << endl;
        cout << "--> ";
        cin >> MenuSection;

        switch (MenuSection)
        {
        case 1:{

            cout << "Enter value: " << endl;
            cin >> value;
            st.push(value);
            queue_size++;
            cout << "Value added\n " << endl;
			system("pause");
        } break;
        case 2:{
            if (!st)
            {
                cout << "Queue is Empty\n ";
				system("pause");
				break;
            }
            else
            {

                value = st.pop();
                cout << "Extracted element: " << value << endl;
				system("pause");
            }
        }break;
        case 3: {
            if (!st)
            {
                cout << "Queue is Empty\n" << endl;
				system("pause");
                break;
            }
            else
            {

                st.print();
                cout << "\n";
				system("pause");
            }
        }break;
		case 4: {}break;
		case 5: {}break;
		case 6: {}break;
        case 0:
            cout << "\n";
            work = 0;
            break;
        default:
            cout << "\n";
            work = 0;
            break;
        }
    }
    st.~Queue();

	
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int work = 1; 
	Coord* CoordList = new Coord[5];
	Queue* QueList = NULL;
	while (work) {
		cout << "�������� � ����� �������� �� ������ ��������?" << endl << "1 - ������� ��������" << endl << "2 - �������� ��������" << endl;
		cout << "3 - ����� �� ���������" << endl;
		int choice; cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			FirstTask(CoordList);
			break;
		case 2: 
			SecondTask(QueList);
			break;

		case 3: exit(0);


		default:cout << "error";
			break;
		}

	}



}