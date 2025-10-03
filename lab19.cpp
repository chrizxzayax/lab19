// comsc 210 | lab17 | Christian Molina
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ReviewNode
{
    double rating;
    string comment;

    ReviewNode* next;
};