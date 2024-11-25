#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> imagen{{1, 2, 3},
                               {1, 2, 3},
                               {1, 2, 3},
                               {1, 2, 3}};
                               
    vector<vector<int>> kernel{{-5, -6, -7},
                               {-8, -9, -10},
                               {-11, -12, -13}};
                               
    int imageSize = imagen.size();
    int rowImage = imagen[0].size();
    int kernelSize = kernel.size();
    int padding = kernelSize / 2;


    vector<vector<int>> resultado(imageSize, vector<int>(rowImage, 0));

    // Convolución con kernel dinámicamente reducido
    for (int i = 0; i < imageSize; i++) {
        for (int j = 0; j < rowImage; j++) {
            int sum = 0;

            for (int ki = 0; ki < kernelSize; ki++) {
                for (int kj = 0; kj < kernelSize; kj++) {
                    int ni = i + ki - padding; // Índice de fila ajustado
                    int nj = j + kj - padding; // Índice de columna ajustado

                    if (ni >= 0 && ni < imageSize && nj >= 0 && nj < rowImage) {
                        sum += imagen[ni][nj] * kernel[ki][kj];
                    }
                }
            }

            resultado[i][j] = sum;
        }
    }

    // Mostrar el resultado
    for (int i = 0; i < imageSize; i++) {
        for (int j = 0; j < rowImage; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
