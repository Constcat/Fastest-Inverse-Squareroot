// Fastest Inverse Square Root
// Testing

float Q_rsqrt(float number)
{

	long i;
	float x2, y;
	const float threehalves = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long*)&y;             
	i = 0x5f3759df - (i >> 1); // had to search this one up baby
	y = *(float*)&i;
	y = y * (threehalves - (x2 * y * y)); //1st iteration
//	y  = y * ( threehalves - ( x2 * y * y ) ); //2nd iteration

	return y;

}
