//-----------------------------------------------------------
//
// Created by Jeffrey Ventrella and added as a utility 
// class for High Fidelity Code base, April 2013
//
//-----------------------------------------------------------

#ifndef __interface__camera__
#define __interface__camera__

#include "Vector3D.h"
#include "Orientation.h"
#include <glm/glm.hpp>

enum CameraMode
{
	CAMERA_MODE_NULL = -1,
	CAMERA_MODE_FIRST_PERSON,
	CAMERA_MODE_THIRD_PERSON,
	CAMERA_MODE_MY_OWN_FACE,
	NUM_CAMERA_MODES
};


class Camera
{
public:
	Camera();
	
	void update();
	
	void setMode			( CameraMode	m ) { mode				= m; }
	void setYaw				( float			y ) { yaw				= y; }
	void setPitch			( float			p ) { pitch				= p; }
	void setRoll			( float			r ) { roll				= r; }
	void setUp				( float			u ) { up				= u; }
	void setDistance		( float			d ) { distance			= d; }
	void setTargetPosition	( glm::vec3		t ) { targetPosition	= t; };
	void setPosition		( glm::vec3		p ) { position			= p; };
	void setOrientation		( Orientation	o ) { orientation.set(o); }

	float		getYaw			() { return yaw;			}
	float		getPitch		() { return pitch;			}
	float		getRoll			() { return roll;			}
	glm::vec3	getPosition		() { return position;		}
	Orientation	getOrientation	() { return orientation;	}
	CameraMode	getMode			() { return mode;			}

private:

	CameraMode	mode;
	glm::vec3	position;
	glm::vec3	targetPosition;
	float		fieldOfView;
	float		yaw;
	float		pitch;
	float		roll;
	float		up;
	float		distance;
	Orientation	orientation;
};

#endif
