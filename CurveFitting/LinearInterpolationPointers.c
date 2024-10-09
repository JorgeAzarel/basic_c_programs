#include <stdio.h>
#include <stdlib.h>

double linearInterpolation(double *x0, double *x1, double *f0, double *f1, double *x);

int main() 
{
    FILE*filePointer;
    filePointer = fopen("resultsPointers.txt", "w");
    if(filePointer == NULL){
    	printf("The file could not be opened\n");
        	return 1;
    }
    double *cp = (double *)malloc(14 * sizeof(double)); //cast: transformar de un tipo de datos a otro
    double *temperature = (double *)malloc(14 * sizeof(double));
    double temp_cp[] = {1.003,1.005, 1.008,1.013,1.020,1.029,1.040,1.051,1.063,1.075,1.087,1.099,1.121,1.142};
    double temp_temperature[] = {250,300,350,400,450,500,550,600,650,700,750,800,900,1000};

    for (int i = 0; i < 14; i++) 
    {
        cp[i] = temp_cp[i];
        temperature[i] = temp_temperature[i];
    }
    double *x0 = (double *)malloc(sizeof(double));
    double *x1 = (double *)malloc(sizeof(double));
    double *f0 = (double *)malloc(sizeof(double));
    double *f1 = (double *)malloc(sizeof(double));
    double *x = (double *)malloc(sizeof(double));
    double result;

    for (double a = 1.003; a <= 1.142; a += 0.001) 
    {
    	for (int b = 0; b < 14; b++) 
        {
            if (a == cp[b]) 
            {
             // No hay necesidad de interpolar, el valor ya se encuentra entre los datos
                fprintf(filePointer, "cp: %.6f, temperature: %.6f\n", cp[b], temperature[b]);
                break;
            } 
            else if (cp[b] > a) 
            {
            	*x0 = cp[b - 1];
            	*x1 = cp[b];
            	*f0 = temperature[b - 1];
            	*f1 = temperature[b];
            	*x = a;
            	result = linearInterpolation(x0, x1, f0, f1, x);
            	fprintf(filePointer, "cp: %.6f, interpolated temperature: %.6f\n", a, result);
            	break;
            }
        }
    }
	free(cp);
	free(temperature);
  	free(x0);
  	free(x1);
  	free(f0);
  	free(f1);
  	free(x);
  	
	fclose(filePointer);
    printf("Successfully written archive\n");
    
    system ("pause");
    return 0;
}
double linearInterpolation(double *x0, double *x1, double *f0, double *f1, double *x) 
{
    return *f0 + (*f1 - *f0) * (*x - *x0) / (*x1 - *x0);
}
