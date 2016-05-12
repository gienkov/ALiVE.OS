// Simply a package which requires other addons.
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ALIVE_main","ALIVE_ui"};
		versionDesc = "ALiVE";
		//versionAct = "['UI',_this] execVM '\x\alive\addons\main\about.sqf';";
		VERSION_CONFIG;
		author[] = {"ALiVE Team - Wolffy_au, Tupolov, HighHead, Jman, Friznit"};
		authorUrl = "http://alivemod.com/";
	};
};


