#include "mex.h"

void imagsum(double *ar,double *br,double *ai,double *bi,double *yr,double *yi){

	*yr=*ar+*br;
	*yi=*ai+*bi;

}


void mexFunction(int nlhs,mxArray *plhs[],int nrhs,const mxArray *prhs[]){
	//variables locales
	double *ar,*br,*yr,*yi,*ai,*bi;
	
	plhs[0]=mxCreateDoubleMatrix((mwSize)1,(mwSize)1,mxCOMPLEX);
	ar=mxGetPr(prhs[0]);
	ai=mxGetPi(prhs[0]);
	br=mxGetPr(prhs[1]);
	bi=mxGetPi(prhs[1]);

	yr=mxGetPr(plhs[0]);
	yi=mxGetPi(plhs[0]);

	imagsum(ar,br,ai,bi,yr,yi);

}
