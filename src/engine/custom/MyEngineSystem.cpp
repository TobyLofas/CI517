#include "MyEngineSystem.h"

MyEngineSystem::MyEngineSystem(int start_x, int start_y, int i_width, int i_height) 
{
	std::cout << "Created Enemy at x: " << start_x << " y: " << start_y << "\n";
	x = start_x;
	y = start_y;
	width = i_width;
	height = i_height;
}

MyEngineSystem::MyEngineSystem()
{

}

void MyEngineSystem::move_to_position(int position_x, int position_y)
{
	if (is_active)
	{
		if (x < position_x)
			x++;
		else if (x > position_x)
			x--;
	
		if (y < position_y)
			y++;
		else if (y > position_y)
			y--;
	}
		if (x == position_x && y == position_y)
			arrived_at_target = true;
		else
			arrived_at_target = false;

}

void MyEngineSystem::move_to_target() 
{
	move_to_position(target_x, target_y);
	if (arrived_at_target)
		std::cout << "TOBY-LOFAS-CI517-2022";
}

void MyEngineSystem::set_target_position(int target_pos_x, int target_pos_y) 
{
	target_x = target_pos_x;
	target_y = target_pos_y;
}