#include "urlcleaner.h"


int main (int argc, char *argv[])
{

	if (argc < 2)
	{
		fprintf(stdout,"%s Version %i.%i.%i\n",argv[0], urlcleaner_VERSION_MAJOR, urlcleaner_VERSION_MINOR, urlcleaner_VERSION_PATCH);
		fprintf(stdout,"Usage: %s [URL]\n",argv[0]);
		fprintf(stdout,"The url cleaner will remove the initial part of the url\n");
		fprintf(stdout,"and will return you the cleaned url on stdout.\n");
		return 1;
	}

	int i = 0;
	char * inputURL = atof(argv[1]);
	char * outputURL, tmp;
	
	for(i=0; i<100 ;i++)
	{
		tmp = inpitURL[i];
		outputURL = tmp[3++];
	}	

	fprintf(stdout,"The entered URL is: %s\n", inputURL);
	fprintf(stdout,"The cleaned URL is: %s\n", outputURL);
	return 0;
}
