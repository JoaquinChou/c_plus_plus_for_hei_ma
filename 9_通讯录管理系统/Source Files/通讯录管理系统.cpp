// - ��װ������ʾ���棬��`void showMenu()`��
// - ��`main`�е��÷�װ�õĺ�����
#define MAX 1000
#include <iostream>
using namespace std;

// �����ϵ�˽ṹ��
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
    /* data */
};


// ���ͨѶ¼�Ľṹ��
struct Addressbooks
{
    int cur_size;
    Person person_array[MAX];
    /* data */
};

// 1�������ϵ��
void addPerson(Addressbooks *abs)
{
    // �ж�ͨѶ¼�Ƿ���������������������
    if(abs->cur_size >= 1000)
    {
        cout << "ͨѶ¼�������޷�������û���" << endl;
        return;
    }
    else
    {
        // ��Ӿ�����ϵ��
        cout << "���������֣�" << endl;
        string name;
        cin >> name;
        abs->person_array[abs->cur_size].name = name;

        while (true)
        {
            cout << "�������Ա�" << endl;
            cout << "1----��" << endl;
            cout << "2----Ů" << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->person_array[abs->cur_size].sex = sex; 
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
            }
        }
        
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->person_array[abs->cur_size].age = age; 

        cout << "������绰��" << endl;
        string phone;
        cin >> phone;
        abs->person_array[abs->cur_size].phone = phone; 

        cout << "������סַ��" << endl;
        string address;
        cin >> address;
        abs->person_array[abs->cur_size].address = address;

        abs->cur_size++; 
        cout << "�û���ӳɹ���" << endl;
        system("pause");
        system("cls");

    }

}

// 2����ʾ��ϵ��
void showPerson(Addressbooks *abs)
{
    // �ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ�ա�
    if (abs->cur_size == 0)
    {
        cout << "��ǰͨѶ¼�м�¼Ϊ��!" << endl;
    }
    else
    {
        for (int i = 0; i < abs->cur_size; i++)
        {
            cout << "������" << abs->person_array[i].name << "\t";
            cout << "�Ա�" << (abs->person_array[i].sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << abs->person_array[i].age << "\t";
            cout << "�绰��" << abs->person_array[i].phone << "\t";
            cout << "סַ��" << abs->person_array[i].address << endl;
        }
    }
    system("pause");
    system("cls");

}

// �����ϵ���Ƿ���ڣ������򷵻���ϵ�����������λ�ã������ڷ���-1��
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->cur_size; i++)
    {
        if (name == abs->person_array[i].name)
            return i;
    }
    return -1;

}

// 3��ɾ��ָ����ϵ��
void deletePerson(Addressbooks *abs)
{
    cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
    string name;
    cin >> name;
    if (isExist(abs, name) == -1)
    {
        cout << "���޴��ˣ�" << endl;
    }
    else
    {
        int pos = isExist(abs, name);
        for (int i = pos; i < abs->cur_size; i++)
        {
            abs->person_array[i] = abs->person_array[i + 1];
        }
        cout << "ɾ���ɹ���" << endl;
        abs->cur_size--;
    }
    system("pause");
    system("cls");
}

// 4������ָ����ϵ��
void findPerson(Addressbooks *abs)
{
    cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;


}

// 5���޸���ϵ��
void modifyPerson(Addressbooks *abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
    string name;
    cin >> name;
    int pos = isExist(abs, name);
    if (pos == -1)
    {
        cout << "���޴��ˣ�" << endl;
    }
    else
    {
        cout << "���������֣�" << endl;
        string name;
        cin >> name;
        abs->person_array[pos].name = name;

        while (true)
        {
            cout << "�������Ա�" << endl;
            cout << "1----��" << endl;
            cout << "2----Ů" << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->person_array[pos].sex = sex; 
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
            }
        }
        
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->person_array[pos].age = age; 

        cout << "������绰��" << endl;
        string phone;
        cin >> phone;
        abs->person_array[pos].phone = phone; 

        cout << "������סַ��" << endl;
        string address;
        cin >> address;
        abs->person_array[pos].address = address;

        cout << "�û��޸ĳɹ���" << endl;
        system("pause");
        system("cls");


    }

}

// 6�����������ϵ��
void cleanPerson(Addressbooks *abs)
{
    
}

// ͨѶ¼�б�����ϵ�˵�����
// ͨѶ¼�б�����ϵ�˸���
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1�������ϵ��  *****" << endl;
    cout << "*****  2����ʾ��ϵ��  *****" << endl;
    cout << "*****  3��ɾ����ϵ��  *****" << endl;
    cout << "*****  4��������ϵ��  *****" << endl;
    cout << "*****  5���޸���ϵ��  *****" << endl;
    cout << "*****  6�������ϵ��  *****" << endl;
    cout << "*****  0���˳�ͨѶ¼  *****" << endl;
    cout << "***************************" << endl;
}

int main()
{
    // ����ͨѶ¼�Ľṹ�����
    Addressbooks abs;
    // ��ʼ����ǰͨѶ¼����Ա����
    int cur_size = 0;
    abs.cur_size = cur_size;

    while (true)
    {
        // �˵��ĵ���
        showMenu();
        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1:     //�����ϵ��
            addPerson(&abs);
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
            deletePerson(&abs);
            break;
        case 4:
            /* code */
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            /* code */
            break;
        default:
        cout << "��ӭ�´�ʹ�ã�" << endl;
        system("pause");
            return 0;
        }
    }

    return 0;
}