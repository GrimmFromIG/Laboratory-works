/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 2.2
*/

#include <iostream>
#include <locale>

enum Names { Taras, Jeff, Seva, Kate, Stacy, Panas, John, Arthur, Micah, Dutch, Hosea, Lenny, Javier};
struct Student1
{
    Names name1;
    unsigned short yearOfStudy1;
    bool army1;
};
struct Student2
{
    Names name2;
    float score2;
    unsigned short yearOfStudy2;
};

int main()
{
    //Частина 1
    std::cout << "Частина 1" << std::endl;
    Student1 myStudents1[7];
        myStudents1[0] = { Jeff, 2, true };
        myStudents1[1] = { Taras, 1, true };
        myStudents1[2] = { Kate, 5, false };
        myStudents1[3] = { Seva, 3, false };
        myStudents1[4] = { Stacy, 5, true };
        myStudents1[5] = { Panas, 3, true };
        myStudents1[6].name1 = Jeff;
        myStudents1[6].yearOfStudy1 = 5;
        myStudents1[6].army1 = true;

        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (myStudents1[i].yearOfStudy1 == 5 && myStudents1[i].army1 == true)
            {
                count++;
            }
        }
        float percent = (float)count * 100 / 7;
        std::cout << percent << "%" << std::endl;
        //Частина 2
        std::cout << "Частина 2" << std::endl;
        Student2 myStudents2[7];
            myStudents2[0] = { Micah, 4.5, 3 };
            myStudents2[1] = { Javier, 4.4, 3 };
            myStudents2[2] = { John, 3.9, 2 };
            myStudents2[3] = { Lenny, 3, 1 };
            myStudents2[4] = { Arthur, 5, 5 };
            myStudents2[5] = { Dutch, 4, 6 };
            myStudents2[6].name2 = Hosea;
            myStudents2[6].yearOfStudy2 = 6;
            myStudents2[6].score2 = 4.6;
        return 0;
}
