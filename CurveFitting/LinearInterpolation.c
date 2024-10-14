#include <stdio.h>
#include <stdlib.h>

double linearInterpolation(double x0, double x1, double f0, double f1, double x);

int main() { 
	FILE*filePointer;
	filePointer = fopen("resultsLinearInterpolation.txt", "w");
	if(filePointer == NULL) {
	        printf("El archivo no pudo ser abierto\n");
	        return 1;
	    }
	double cp[14] = {1.003,1.005,1.008,1.013,1.020,1.029,1.040,1.051,1.063,1.075,1.087,1.099,1.121,1.142};
	double temperature[14] = {250,300,350,400,450,500,550,600,650,700,750,800,900,1000};
    double x0, x1, f0, f1, x, result;

    for (double a = 1.004; a < 1.141; a = a + 0.001)
    {
		for	(int b = 0; b < (sizeof(cp)/sizeof(cp[0])) ; b++)
		{
			if(a == cp[b])
			{
				// No hay necesidad de interpolar, el valor ya se encuentra entre los datos
				fprintf(filePointer, "%.6f ", temperature[b]);
				break;
			}
			else if(cp[b] > a)
				{
					x0 = cp[b-1];
					x1 = cp[b];
					f0 = temperature[b-1];
					f1 = temperature[b];
					result = linearInterpolation(x0, x1, f0, f1, a);
					fprintf(filePointer, "%.6f ", result);
					break;
				}
		}	
    }
    fclose(filePointer);
    printf("Archivo escrito exitosamente\n");
    
    system ("pause");
    return 0;
    }
double linearInterpolation(double x0, double x1, double f0, double f1, double x) {

    return f0 + ((x - x0) / (x1 - x0)) * (f1 - f0);
}
