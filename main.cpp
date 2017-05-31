#include <iostream>
#include <fstream>
#include <cstring>
#include <cstddef>
#include "hex_print.h"
#include "bool_print.h"


int main() {
    struct Student{
        char name[17];
        uint16_t enter_year;
        float av_score;
        size_t gender : 1;
        size_t course;
        Student* prefect;
    }group[3];

    strcpy(group[0].name,"Kirillov Andrey");
    group[0].enter_year = 2015;
    group[0].av_score = 4.3;
    group[0].gender = 1;
    group[0].course = 3;
    group[0].prefect = nullptr;

    strcpy(group[1].name,"Golovach Elena");
    group[1].enter_year = 2015;
    group[1].av_score = 4.7;
    group[1].gender = 0;
    group[1].course = 3;
    group[1].prefect = &group[0];

    strcpy(group[2].name,"Belov Oleg");
    group[2].enter_year = 2015;
    group[2].av_score = 3.9;
    group[2].gender = 1;
    group[2].course = 3;
    group[2].prefect = &group[0];

//-------------------------

    std::cout<<"array adress: "<<&group
             <<"\narray size: "<<sizeof(group)
             <<"\n\n3rd element details: ";



    std::cout<<"\n\nname:\n\tadress: "<<&group[2].name<<"\n\t\tHEX: ";
                print_in_hex(&group[2].name,sizeof(&group[2].name));
    std::cout<<"\n\t\tBIN: ";
                print_in_binary(&group[2].name,sizeof(&group[2].name));

    std::cout<<"\n\toffset: "<<offsetof(Student,name)<<"\n\tsize: "<<sizeof(group[2].name);


    std::cout<<"\n\nenter_year:\n\tadress: "<<&group[2].enter_year<<"\n\t\tHEX: ";
        print_in_hex(&group[2].enter_year,sizeof(&group[2].enter_year));
    std::cout<<"\n\t\tBIN: ";
        print_in_binary(&group[2].enter_year,sizeof(&group[2].enter_year));

    std::cout<<"\n\toffset: "<<offsetof(Student,enter_year)<<"\n\tsize: "<<sizeof(group[2].enter_year);


    std::cout<<"\n\nav_score:\n\tadress: "<<&group[2].av_score<<"\n\t\tHEX: ";
        print_in_hex(&group[2].av_score,sizeof(&group[2].av_score));
    std::cout<<"\n\t\tBIN: ";
        print_in_binary(&group[2].av_score,sizeof(&group[2].av_score));

    std::cout<<"\n\toffset: "<<offsetof(Student,av_score)<<"\n\tsize: "<<sizeof(group[2].av_score);


    std::cout<<"\ncourse:\n\tadress: "<<&group[2].course<<"\n\t\tHEX: ";
        print_in_hex(&group[2].course,sizeof(&group[2].course));
    std::cout<<"\n\t\tBIN: ";
        print_in_binary(&group[2].course,sizeof(&group[2].course));

    std::cout<<"\n\toffset: "<<offsetof(Student,course)<<"\n\tsize: "<<sizeof(group[2].course);


    std::cout<<"\n\nprefect:\n\tadress: "<<&group[2].prefect<<"\n\t\tHEX: ";
        print_in_hex(&group[2].prefect,sizeof(&group[2].prefect));
    std::cout<<"\n\t\tBIN: ";
        print_in_binary(&group[2].prefect,sizeof(&group[2].prefect));

    std::cout<<"\n988\toffset: "<<offsetof(Student,prefect)<<"\n\tsize: "<<sizeof(group[2].prefect);



/*
    std::cout<<"enter_year: \n\t"<<&group[2].enter_year<<std::endl;
    std::cout<<"av_score:\n\t"<<&group[2].av_score<<std::endl;
    std::cout<<&group[2].course<<std::endl;
    std::cout<<&group[2].prefect<<std::endl;*/
    return 0;
}