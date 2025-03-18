#include <iostream>
using namespace std;

class patient {
    public:
        string patient_name, disease;
        patient(){
            cout << "Enter the patient Name: ";
            cin >> patient_name;
            cout << "Enter the disease: ";
            cin >> disease;
        }
        void putdatap(){
            cout << "Patient Name: " << patient_name << endl;
            cout << "Disease: " << disease << endl; 
        }
};

class In_patient: public patient{
    public: 
        float roomrent;
        In_patient(){
            cout << "Enter the room rent: ";
            cin >> roomrent;
        }
        void putdata(){
            putdatap();
            cout << "Room Rent: " << roomrent << endl;
        }
};

class Out_patient: public patient{
    public: 
        float OPD_charge;
        Out_patient(){
            cout << "Enter the OPD charge: ";
            cin >> OPD_charge;
        }
        void putdata(){
            putdatap();
            cout << "OPD Charge: " << OPD_charge << endl;
        }
};

int main(){
    In_patient patient1;
    Out_patient patient2;
    patient1.putdata();
    patient2.putdata();
}