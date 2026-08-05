#include <iostream>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    
    DiamondCompany(int id, string name, int staff, double revenue,
                   int import_diamond, int export_diamond, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_diamond;
        comp_export_diamonds = export_diamond;
        comp_ceo = ceo;
    }

    
    void setCompId(int id)
    {
        comp_id = id;
    }

    void setCompName(string name)
    {
        comp_name = name;
    }

    void setStaffQuantity(int staff)
    {
        comp_staff_quantity = staff;
    }

    void setRevenue(double revenue)
    {
        comp_revenue = revenue;
    }

    void setImportDiamonds(int importDiamond)
    {
        comp_import_raw_diamonds = importDiamond;
    }

    void setExportDiamonds(int exportDiamond)
    {
        comp_export_diamonds = exportDiamond;
    }

    void setCEO(string ceo)
    {
        comp_ceo = ceo;
    }

    
    int getCompId()
    {
        return comp_id;
    }

    string getCompName()
    {
        return comp_name;
    }

    int getStaffQuantity()
    {
        return comp_staff_quantity;
    }

    double getRevenue()
    {
        return comp_revenue;
    }

    int getImportDiamonds()
    {
        return comp_import_raw_diamonds;
    }

    int getExportDiamonds()
    {
        return comp_export_diamonds;
    }

    string getCEO()
    {
        return comp_ceo;
    }


    void display()
    {
        cout << "\nCompany ID : " << getCompId() << endl;
        cout << "Company Name : " << getCompName() << endl;
        cout << "Staff Quantity : " << getStaffQuantity() << endl;
        cout << "Revenue : " << getRevenue() << endl;
        cout << "Imported Raw Diamonds : " << getImportDiamonds() << endl;
        cout << "Exported Diamonds : " << getExportDiamonds() << endl;
        cout << "CEO Name : " << getCEO() << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Companies : ";
    cin >> n;

    DiamondCompany *company[n];

    for (int i = 0; i < n; i++)
    {
        int id, staff, importDiamond, exportDiamond;
        double revenue;
        string name, ceo;

        cout << "\nEnter Details of Company " << i + 1 << endl;

        cout << "Company ID : ";
        cin >> id;

        cin.ignore();

        cout << "Company Name : ";
        getline(cin, name);

        cout << "Staff Quantity : ";
        cin >> staff;

        cout << "Revenue : ";
        cin >> revenue;

        cout << "Imported Raw Diamonds : ";
        cin >> importDiamond;

        cout << "Exported Diamonds : ";
        cin >> exportDiamond;

        cin.ignore();

        cout << "CEO Name : ";
        getline(cin, ceo);

        // Parameterized Constructor
        company[i] = new DiamondCompany(id, name, staff, revenue,importDiamond, exportDiamond, ceo);
    }

    cout << "\n========== Company Details ==========\n";

    for (int i = 0; i < n; i++)
    {
        company[i]->display();
    }

    return 0;
}