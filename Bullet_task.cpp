#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bullet
{
private:
	// Where is the bullet?
	Vector2f m_Position;

	// What each bullet looks like
	RectangleShape m_BulletShape;

	// Is this bullet currently whizzing through the air
	bool m_InFlight = false;

	// How fast does a bullet travel?
	float m_BulletSpeed = 1000;

	// What fraction of 1 pixel does the bullet travel, 
	// Horizontally and vertically each frame?
	// These values will be derived from m_BulletSpeed
	float m_BulletDistanceX;
	float m_BulletDistanceY;

	// Where is this bullet headed to?
	float m_XTarget;
	float m_YTarget;

	// Some boundaries so the bullet doesn't fly forever
	float m_MaxX;
	float m_MinX;
	float m_MaxY;
	float m_MinY;

// Public function prototypes go here
public:
	// The constructor
	Bullet();

	// Stop the bullet
	void stop();

	// Returns the value of m_InFlight
	bool isInFlight();

	// Launch a new bullet
	void shoot(float startX, float startY,
		float xTarget, float yTarget);

	// Tell the calling code where the bullet is in the world
	FloatRect getPosition();

	// Return the actual shape (for drawing)
	RectangleShape getShape();

	// Update the bullet each frame
	void update(float elapsedTime);

};

// The constructor



//shoot()
void Bullet::shoot(float startX, float startY,
	float targetX, float targetY)
{
	// Keep track of the bullet - m_InFlight, m_Position

	// Calculate the gradient of the flight path
	
	// Any gradient less than zero needs to be negative
	
	// Set the "speed" horizontally and vertically
		
	// Point the bullet in the right direction
	if (targetX < startX)
	{
		
	}

	if (targetY < startY)
	{
		
	}

	// Finally, assign the results to the
	// member variables
	m_XTarget = 
	m_YTarget = 

	// Set a max range of 1000 pixels
	float range = 1000;
	m_MinX = startX - range;
	m_MaxX = startX + range;
	m_MinY = startY - range;
	m_MaxY = startY + range;
	
	// Position the bullet
	
}

//stop()


//isInFlight()


// getPosition()


//getShape()



void Bullet::update(float elapsedTime)
{
	// Update the bullet position variables


	// Set the bullet position


	// Has the bullet gone out of range? Then stop.

}
