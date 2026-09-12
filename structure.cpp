struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    Student s1;

    s1.name = "Nakul";
    s1.age = 20;
    s1.marks = 85.5;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.marks << endl;
}