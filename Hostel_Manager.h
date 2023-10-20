#ifndef HOSTEL_MANAGER_H
#define HOSTEL_MANAGER_H

#include "PG.h"
#include "College_Hostel.h"
#include "Apartment.h"

class HostelManager
{
private:
    unordered_map<string, vector<Hostel *>> hostelsByCollege;

public:
    void addHostel(const string &collegeName, Hostel *hostel);

    vector<Hostel *> &getColleges(const string &collegeName);

    void showAllHostels(const string &collegeName);

    void filterByRent(vector<Hostel *> &hostels);

    vector<Hostel *> filterByHostelType( vector<Hostel *> &hostels,const  string &hostelType);

    void filterByDistance(vector<Hostel *> &hostels);

    void showHostels( vector<Hostel *> &hostels);

    void showBookmarkedHostels(const string &collegeName);

    void bookHostel(const string &collegeName, const string &hostelName);
};
#endif