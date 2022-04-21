#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    bool flag = true;
    while (flag)
    {


        float mat1[3][3];
        float mat2[3][3];
        float mat[3][3];
        cout << "enter matrices element (1) :\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << i + 1 << " - " << j + 1 << " : ";
                cin >> mat1[i][j];
            }
        }

        cout << endl;
        cout << endl;

        cout << "enter matrices element (2) :\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << i + 1 << " - " << j + 1 << " : ";
                cin >> mat2[i][j];
            }
        }

        cout << endl;
        cout << endl;

        int choice = -1;
        cout << "enter your choice :\nsum(1)\ndifference(2)\nProduct(3)\nQuotient(4)\n";


        do {
            cin >> choice;

            switch (choice) {

            case 1: cout << "sum\n";

                cout << "the sum of you're matrices is : \n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat1[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(+)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat2[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(=)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        mat[i][j] = mat1[i][j] + mat2[i][j];
                        cout << mat[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << endl;
                cout << endl;

                break;


            case 2: cout << "Subtract\n";

                cout << "the difference of you're matrices is : \n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat1[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(-)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat2[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(=)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        mat[i][j] = mat1[i][j] - mat2[i][j];
                        cout << mat[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << endl;
                cout << endl;

                break;


            case 3: cout << "Multiply\n";

                cout << "the Product of you're matrices is : \n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat1[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(*)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat2[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(=)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        mat[i][j] = mat1[i][j] * mat2[i][j];
                        cout << mat[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << endl;
                cout << endl;

                break;


            case 4: cout << "Divide\n";

                cout << "the Quotient of you're matrices is : \n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat1[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(/)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << mat2[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << "\n-----(=)-----\n";

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        mat[i][j] = mat1[i][j] / mat2[i][j];
                        cout << mat[i][j] << "   ";
                    }
                    cout << endl;
                }

                cout << endl;
                cout << endl;

                break;


            default: cout << "your number is wrong ! please enter between 1 - 4\n";
            }
        } while (choice < 1 || choice > 4);

        while (true) {

            char x;
            cout << "do you want to solving determinant ? [y/n] ";
            cin >> x;
            if (x == 'y') {
                float det;
                det = (mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]))) - (mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[1][2] * mat[2][0]))) + (mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[1][1] * mat[2][0])));
                cout << "\ndeterminant is : " << det << endl;
                break;
            }
            else {
                break;
            }

        }
        char y;
        cout << "do want to try it again ? [y/n]  ";
        cin >> y;
 
        if (y != 'y') {
            break;
        }
        else {
            continue;
        }
    }
    cout << "\nthanks for using this app . . .\nsee you later !\n\n";
    return 0;
}

