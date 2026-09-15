#include<iostream>
#include<string>

using namespace std;

class Users{

    private:
    string email;
    string phone;
    string dob;
    string address;
    string bio;
    string lang;
    string usertype;

    public:
    string username;
    string name;

    void addemail(string emailId){
        email = emailId;
    }
    
    void addusertype(string usertypeId){
        usertype = usertypeId;
    }
    
    void addphone(string phoneId){
        phone = phoneId;
    }

    Users(string name, string username){
        this->name = name;
        this->username = username;
    }
    void DisplayUserData(Users u){
        cout<<u.email<<endl;
        cout<<u.phone<<endl;
        cout<<u.dob<<endl;
        cout<<u.address<<endl;
        cout<<u.bio<<endl;
        cout<<u.lang<<endl;
        cout<<u.usertype<<endl;
        cout<<u.username<<endl;
        cout<<u.name<<endl;
    }
};

class EmergencyContact : public Users{

    private:
    string ContactName;
    string RelationWithCont;
    string ContactPhone;
};

class IdentityVerification : public Users{

    private:
    string IdType;
    string IdNumber;
};

class TravelIntrests : public Users{

    private:
    string Intrests[];
};

class TravelConpanies : public Users{

    private:
    string Companines[];
};

class Documents : public Users{

    private:
    string Docs[];
};

class NotificationGlobal : public Users{

    public:
    string Companines[];
};

class UserBooking : public Users{
    
    private:
    string Companines[];
};

class UsersTrips : public Users{

    private:
    string Trips[];
};

class UserSavedPlace : public Users{

    private:
    string SavePlaces[];
};

class UserRewards : public Users{
    
    private:
    string Rewards[];
};
