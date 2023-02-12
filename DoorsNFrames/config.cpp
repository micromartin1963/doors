
class CfgPatches
{
	class MyDoor
	{
		units[] = {"land_MyDoor"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class MyDoor
	{

		type = "mod";

	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;



	class land_mydoor: HouseNoDestruct
	{
		scope = 1;
		model = "DoorsNFrames\models\land_mydoor.p3d";

		class Doors
		{
			class Door1
			{
				displayName = "Maze door In";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};

		};

	};


	class land_mydoor2: HouseNoDestruct
	{
		scope = 1;
		model = "DoorsNFrames\models\land_mydoor2.p3d";

		class Doors
		{
			class Door1
			{
				displayName = "Maze door In";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};

		};

	};

		class land_mydoor3: HouseNoDestruct
	{
		scope = 1;
		model = "DoorsNFrames\models\land_mydoor3.p3d";

		class Doors
		{
			class Door1
			{
				displayName = "Maze door In";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};

		};

	};






};