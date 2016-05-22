/*****************************************************************************/
/* filename: 	Bird_eye.cpp                                                 */
/* author: 		Alexander Treib (TR)                                         */
/* description:	Simulation of the superior class                             */
/*---------------------------------------------------------------------------*/
/* revision history:                                                         */
/* date       | author | modification                                        */
/*____________|________|_____________________________________________________*/
/* 2015-11-20 | TR     | initial revision                                    */
/*****************************************************************************/

#include "Bildverarbeitung_sim.hpp"

Bildverarbeitung_sim::Bildverarbeitung_sim()
{
}

Bildverarbeitung_sim::~Bildverarbeitung_sim()
{
}

int main()
{
	Bildverarbeitung_sim sim;

	cout << "Calibration Tool" << endl;
	cout << "Press 'c' for camera_calibration" << endl;
	cout << "Press 'b' for bid_eye calibration" << endl;
	char calib_select;
	cin >> calib_select;

	if (calib_select == 'c')
	{
		sim.dist_correct.camera_calibration();
	}

	if (calib_select == 'b')
	{
		sim.bird_eye.go();
	}

	return 0;
}