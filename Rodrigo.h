void drive(double* odomPtr, double*fuelPtr, double mpg, double distance) { // receiving addresses
  if(distance > (mpg * *fuelPtr) ) { //checking to see if fuel will run out
    *odomPtr += (mpg * *fuelPtr) ; // * taking value at the address
    *fuelPtr = 0.0 ;
    return ;
  }
  *fuelPtr -= distance/mpg ;
  *odomPtr += distance ;
}