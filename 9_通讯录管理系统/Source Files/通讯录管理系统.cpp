// - 封装函数显示界面，如`void showMenu()`；
// - 在`main`中调用封装好的函数。
#define MAX 1000
#include <iostream>
using namespace std;

// 设计联系人结构体
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
    /* data */
};


// 设计通讯录的结构体
struct Addressbooks
{
    int cur_size;
    Person person_array[MAX];
    /* data */
};

// 1、添加联系人
void addPerson(Addressbooks *abs)
{
    // 判断通讯录是否满，如果满了则不再添加了
    if(abs->cur_size >= 1000)
    {
        cout << "通讯录已满，无法添加新用户！" << endl;
        return;
    }
    else
    {
        // 添加具体联系人
        cout << "请输入名字：" << endl;
        string name;
        cin >> name;
        abs->person_array[abs->cur_size].name = name;

        while (true)
        {
            cout << "请输入性别：" << endl;
            cout << "1----男" << endl;
            cout << "2----女" << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->person_array[abs->cur_size].sex = sex; 
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }
        
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->person_array[abs->cur_size].age = age; 

        cout << "请输入电话：" << endl;
        string phone;
        cin >> phone;
        abs->person_array[abs->cur_size].phone = phone; 

        cout << "请输入住址：" << endl;
        string address;
        cin >> address;
        abs->person_array[abs->cur_size].address = address;

        abs->cur_size++; 
        cout << "用户添加成功！" << endl;
        system("pause");
        system("cls");

    }

}

// 2、显示联系人
void showPerson(Addressbooks *abs)
{
    // 判断通讯录中人数是否为0，如果为0，提示记录为空。
    if (abs->cur_size == 0)
    {
        cout << "当前通讯录中记录为空!" << endl;
    }
    else
    {
        for (int i = 0; i < abs->cur_size; i++)
        {
            cout << "姓名：" << abs->person_array[i].name << "\t";
            cout << "性别：" << (abs->person_array[i].sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->person_array[i].age << "\t";
            cout << "电话：" << abs->person_array[i].phone << "\t";
            cout << "住址：" << abs->person_array[i].address << endl;
        }
    }
    system("pause");
    system("cls");

}

// 检测联系人是否存在，存在则返回联系人所在数组的位置，不存在返回-1。
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->cur_size; i++)
    {
        if (name == abs->person_array[i].name)
            return i;
    }
    return -1;

}

// 3、删除指定联系人
void deletePerson(Addressbooks *abs)
{
    cout << "请输入你要删除的联系人：" << endl;
    string name;
    cin >> name;
    if (isExist(abs, name) == -1)
    {
        cout << "查无此人！" << endl;
    }
    else
    {
        int pos = isExist(abs, name);
        for (int i = pos; i < abs->cur_size; i++)
        {
            abs->person_array[i] = abs->person_array[i + 1];
        }
        cout << "删除成功！" << endl;
        abs->cur_size--;
    }
    system("pause");
    system("cls");
}

// 4、查找指定联系人
void findPerson(Addressbooks *abs)
{
    cout << "请输入你要查找的联系人：" << endl;


}

// 5、修改联系人
void modifyPerson(Addressbooks *abs)
{
    cout << "请输入你要修改的联系人：" << endl;
    string name;
    cin >> name;
    int pos = isExist(abs, name);
    if (pos == -1)
    {
        cout << "查无此人！" << endl;
    }
    else
    {
        cout << "请输入名字：" << endl;
        string name;
        cin >> name;
        abs->person_array[pos].name = name;

        while (true)
        {
            cout << "请输入性别：" << endl;
            cout << "1----男" << endl;
            cout << "2----女" << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->person_array[pos].sex = sex; 
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }
        
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->person_array[pos].age = age; 

        cout << "请输入电话：" << endl;
        string phone;
        cin >> phone;
        abs->person_array[pos].phone = phone; 

        cout << "请输入住址：" << endl;
        string address;
        cin >> address;
        abs->person_array[pos].address = address;

        cout << "用户修改成功！" << endl;
        system("pause");
        system("cls");


    }

}

// 6、清空所有联系人
void cleanPerson(Addressbooks *abs)
{
    
}

// 通讯录中保存联系人的数组
// 通讯录中保存联系人个数
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

int main()
{
    // 创建通讯录的结构体变量
    Addressbooks abs;
    // 初始化当前通讯录的人员个数
    int cur_size = 0;
    abs.cur_size = cur_size;

    while (true)
    {
        // 菜单的调用
        showMenu();
        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1:     //添加联系人
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
        cout << "欢迎下次使用！" << endl;
        system("pause");
            return 0;
        }
    }

    return 0;
}