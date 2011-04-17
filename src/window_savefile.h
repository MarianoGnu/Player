/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _WINDOW_FILE_H_
#define _WINDOW_FILE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include "window_base.h"

////////////////////////////////////////////////////////////
/// Window File Class
////////////////////////////////////////////////////////////
class Window_SaveFile :	public Window_Base {
public:
	////////////////////////////////////////////////////////
	/// Constructor.
	////////////////////////////////////////////////////////
	Window_SaveFile(int ix, int iy, int iwidth, int iheight);

	////////////////////////////////////////////////////////
	/// Destructor.
	////////////////////////////////////////////////////////
	~Window_SaveFile();

	////////////////////////////////////////////////////////
	/// Renders the current save on the window.
	////////////////////////////////////////////////////////
	void Refresh();

	////////////////////////////////////////////////////////
	/// Sets the id of the savegame.
	/// @param id : Savegame id
	////////////////////////////////////////////////////////
	void SetIndex(int id);

	////////////////////////////////////////////////////////
	/// Party data displayed in the savegame slot
	/// @param actors : face_id and face_name of all party members
	/// @param name : Name of the First party member
	/// @param hp : Hp of the First party member
	/// @param level : Level of the First party member
	////////////////////////////////////////////////////////
	void SetParty(const std::vector<std::pair<int, std::string> >& actors,
		std::string name, int hp, int level);

	void Update();

protected:
	void UpdateCursorRect();

	int index;
	std::vector<std::pair<int, std::string> > party;
	std::string hero_name;
	int hero_hp;
	int hero_level;
};

#endif
