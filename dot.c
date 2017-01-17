double dot(double a[], double b[], int length)
{
	int i = 0;
	double sum = 0.0;   
	for (i = 0; i < length; i++) //made this go from 0 to length - 1 rather than 1 to length
	{ 
		sum += (a[i] * b[i]); //simplified this just a bit
	}
	return sum;
}
