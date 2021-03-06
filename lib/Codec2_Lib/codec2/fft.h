/*---------------------------------------------------------------------------*\
  
  FILE........: fft.h
  AUTHOR......: Bruce Robertson
  DATE CREATED: 29/11/2010

  Bridge between existing code and kiss_fft.

\*---------------------------------------------------------------------------*/
#ifndef __FFT__
#define __FFT__

__inline void initialize_fft (int n);
__inline void fft (float x[], int n, int isign);

#endif	/* __FFT__ */

