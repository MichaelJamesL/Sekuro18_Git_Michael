#include <iostream>
using namespace std;

class RobotPemadam {
    private:
        int jarak;
        string status;

    public:
        void inputSensor(int input) {
            jarak = input;
        }

        void prosesLogika() {
            if (jarak > 20) {
                status = "Maju Mencari Api";
            } else if (jarak <= 20 && jarak > 5) {
                status = "UDAH DEKET NIH BRAY";
            } else if (jarak <= 5) {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }

        void cetakStatus() {
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
        }

        int getJarak() {
            return jarak;
        }
};

int main() {
    RobotPemadam robot;
    int input;

    while (true) {
        cout << "Masukkan jarak (cm): ";
        cin >> input;

        if (input == 67) {
            cout << "Program dihentikan." << endl;
            break;
        }

        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}