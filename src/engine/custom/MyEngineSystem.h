#ifndef __MY_ENGINE_H__
#define __MY_ENGINE_H__

#include "../EngineCommon.h"

class MyEngineSystem {
	friend class XCube2Engine;
	private:
		
		
	public:
		MyEngineSystem(int start_x, int start_y, int width, int height);
		MyEngineSystem();
		void move_to_position(int position_x, int position_y);
		void move_to_target();
		void set_target_position(int target_pos_x, int target_pos_y);
		int x, y, width, height, target_x, target_y;
		bool arrived_at_target = false;
		bool is_active;
		float arrival_deadzone = 2.5;
};

#endif