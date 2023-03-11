/**
 *
 *
 * Design Pattern: Prototype
 *
 *
 * Used to clone objects from the blueprint provided.
 * The objects made by prototype are exact coppies of object from which they are being created.SS
 *
 * */

#include <iostream>

#include "sedan.h"
#include "sportscar.h"

using namespace std;

int main()
{
    Sedan *sedanProto = new Sedan("yellow","1.0.0");
    SportsCar *sportsCarProto = new SportsCar("green","0.0.1");

    std::cout << "Type : ";
    sportsCarProto->get_type();
    std::cout << "color : "<<sportsCarProto->get_color()<< std::endl;
    std::cout << "make Number : "<<sportsCarProto->get_make_number()<< std::endl<< std::endl;

    std::cout << "Type is : ";
    sportsCarProto->get_type();
    std::cout << "color : "<<sportsCarProto->get_color()<< std::endl;
    std::cout << "make Number : "<<sportsCarProto->get_make_number()<< std::endl<< std::endl;

    std::cout << "---------------- CLONES ----------------"<<std::endl<<std::endl;


    Car *sedanClone = sedanProto->clone();
    Car *sportsCarClone = sportsCarProto->clone();

    std::cout << "Type : ";
    sedanClone->get_type();
    std::cout << "color : "<<sedanClone->get_color()<< std::endl;
    std::cout << "make Number : "<<sedanClone->get_make_number()<< std::endl<< std::endl;

    std::cout << "Type : ";
    sportsCarClone->get_type();
    std::cout << "color : "<<sportsCarClone->get_color()<< std::endl;
    std::cout << "make Number : "<<sportsCarClone->get_make_number()<< std::endl<< std::endl;

    delete sedanProto;
    delete sportsCarProto;

    return 0;
}
