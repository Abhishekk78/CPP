#include <iostream>
#include <string>

using namespace std;

class Train
{
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int trainCount;

public:
    Train()
    {
        trainNumber = 0;
        trainName = "";
        source = "";
        destination = "";
        trainTime = "";
    }

    Train(int tn, string tnName, string src,
          string dest, string time)
    {
        trainNumber = tn;
        trainName = tnName;
        source = src;
        destination = dest;
        trainTime = time;

        trainCount++;
    }

    ~Train()
    {
        if (trainNumber != 0)
        {
            trainCount--;
        }
    }

    void setTrainNumber(int trainNumber)
    {
        this->trainNumber = trainNumber;
    }

    void setTrainName(string trainName)
    {
        this->trainName = trainName;
    }

    void setSource(string source)
    {
        this->source = source;
    }

    void setDestination(string destination)
    {
        this->destination = destination;
    }

    void setTrainTime(string trainTime)
    {
        this->trainTime = trainTime;
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    string getTrainName()
    {
        return trainName;
    }

    string getSource()
    {
        return source;
    }

    string getDestination()
    {
        return destination;
    }

    string getTrainTime()
    {
        return trainTime;
    }

    void inputTrainDetails()
    {
        cout << "\nEnter train number : ";
        cin >> trainNumber;

        cin.ignore();

        cout << "Enter train name : ";
        getline(cin, trainName);

        cout << "Enter train source : ";
        getline(cin, source);

        cout << "Enter train destination : ";
        getline(cin, destination);

        cout << "Enter train time : ";
        getline(cin, trainTime);

        trainCount++;
    }

    void displayTrainDetails()
    {
        cout << "\n...... Train Details ......\n";

        cout << "Train number       : "
             << trainNumber << endl;

        cout << "Train name         : "
             << trainName << endl;

        cout << "Train source       : "
             << source << endl;

        cout << "Train destination  : "
             << destination << endl;

        cout << "Train time         : "
             << trainTime << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;

class RailwaySystem
{
private:
    Train trains[100];

    int totalTrains;

public:
    RailwaySystem()
    {
        totalTrains = 0;
    }

    void addTrain()
    {
        if (totalTrains >= 100)
        {
            cout << "\nTrain record limit reached!" << endl;
            return;
        }

        trains[totalTrains].inputTrainDetails();

        totalTrains++;

        cout << "\nTrain added successfully!" << endl;
    }

    void displayAllTrains()
    {
        if (totalTrains == 0)
        {
            cout << "\nNo train records found!" << endl;
            return;
        }

        cout << "\n====================================";
        cout << "\n        ALL TRAIN RECORDS";
        cout << "\n====================================";

        for (int i = 0; i < totalTrains; i++)
        {
            cout << "\n\nTrain " << i + 1 << ":" << endl;

            trains[i].displayTrainDetails();

            cout << "\n------------------------------------";
        }
    }

    void searchTrainByNumber(int number)
    {
        bool found = false;

        for (int i = 0; i < totalTrains; i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << "\nTrain found!" << endl;

                trains[i].displayTrainDetails();

                found = true;

                break;
            }
        }

        if (!found)
        {
            cout << "\nTrain with number "
                 << number
                 << " not found."
                 << endl;
        }
    }
};

int main()
{
    RailwaySystem railway;

    int choice;

    do
    {
        cout << "\n\n==============================================";
        cout << "\n       RAILWAY MANAGEMENT SYSTEM";
        cout << "\n==============================================";

        cout << "\n1. Add Train";
        cout << "\n2. Display All Trains";
        cout << "\n3. Search Train By Number";
        cout << "\n4. Display Train Count";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            railway.addTrain();

            break;

        case 2:

            railway.displayAllTrains();

            break;

        case 3:
        {
            int number;

            cout << "\nEnter train number to search : ";
            cin >> number;

            railway.searchTrainByNumber(number);

            break;
        }

        case 4:

            cout << "\nTotal Train Records : "
                 << Train::getTrainCount()
                 << endl;

            break;

        case 5:

            cout << "\nThank you!" << endl;

            break;

        default:

            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}