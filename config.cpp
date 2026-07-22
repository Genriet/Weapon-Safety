class CfgMods
{
	class WeaponSafety
	{
		type = "mod";
		dependencies[] = { "World" };
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "WeaponSafety\scripts\4_World" };
			};
		};
	};
};
class CfgPatches
{
	class WeaponSafety
	{
		requiredVersion = 0.1;
		requiredAddons[] = { "DZ_Weapons_Firearms", "DZ_Weapons_Shotguns", "DZ_Pistols", "DZ_Weapons_Archery" };
	};
};

class Mode_Safe
{
	displayName = "$STR_Safe";
};
class CfgWeapons
{
	//Because config parser works this way
	class SecondMuzzle;

	class Pistol_Base;
	class Colt1911_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto"};//It doesn't have to be first in array
		class Safe : Mode_Safe {};
	};
	class CZ75_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Deagle_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Derringer_Base : Pistol_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
		class SecondMuzzle : SecondMuzzle
		{
			modes[] = { "Safe", "Single" };
			class Safe : Mode_Safe {};
		};
	};
	class LongHorn_Base : Pistol_Base 
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class FNX45_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Glock19_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Magnum_Base : Pistol_Base 
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
		class SecondMuzzle : SecondMuzzle
		{
			modes[] = { "Safe", "Single" };
			class Safe : Mode_Safe {};
		};
	};
	class MKII_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class P1_Base : Pistol_Base 
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class MakarovIJ70_Base : Pistol_Base 
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Rifle_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class AK101_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto"};
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class AK74_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class AKM_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class Aug_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","Burst","FullAuto" };
		class Safe : Mode_Safe {};
	};
	class B95_Base : Rifle_Base
	{
		modes[] = { "Safe", "Single","Double" };
		class Safe : Mode_Safe {};
		class SecondMuzzle : SecondMuzzle
		{
			modes[] = { "Safe", "Single","Double" };
			class Safe : Mode_Safe {};
		};
	};
	class CZ527_Base : BoltActionRifle_ExternalMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class CZ550_Base : BoltActionRifle_ExternalMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class CZ61_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto" };
		class Safe : Mode_Safe {};
	};
	class FAL_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto" };
		class Safe : Mode_Safe {};
	};
	class Famas_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","Burst","FullAuto" };
		class Safe : Mode_Safe {};
	};
	class Izh18_Base : Rifle_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class M14_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class M16A2_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","Burst" };
		class Safe : Mode_Safe {};
	};
	class M4A1_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto", "FullAuto" };
		class Safe : Mode_Safe {};
	};
	class Mosin9130_Base : BoltActionRifle_InnerMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class SawedoffMosin9130_Base : Mosin9130_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class MP5K_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","Burst","FullAuto" };
		class Safe : Mode_Safe {};
	};
	class PP19_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto", "FullAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class Repeater_Base : Rifle_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class Ruger1022_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class Scout_Base : BoltActionRifle_ExternalMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class SKS_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class SSG82_Base : BoltActionRifle_ExternalMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class SVD_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class UMP45_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto", "FullAuto" };
		class Safe : Mode_Safe {};
	};
	class VSS_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto", "FullAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class Winchester70_Base : BoltActionRifle_InnerMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class SV98_Base : BoltActionRifle_ExternalMagazine_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class Shotgun_Base;
	class Saiga_Base : Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto", "FullAuto" };
		class Safe : Mode_Safe {};
		safetyBlocksBolt = true;
	};
	class Izh18Shotgun_Base : Shotgun_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class Izh43Shotgun_Base : Shotgun_Base
	{
		modes[] = { "Safe", "Single","Double" };
		class Safe : Mode_Safe {};
		class SecondMuzzle : SecondMuzzle
		{
			modes[] = { "Safe", "Single","Double" };
			class Safe : Mode_Safe {};
		};
	};
	class Mp133Shotgun_Base : Shotgun_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class R12_Base: Shotgun_Base
	{
		modes[] = { "Safe", "SemiAuto" };
		class Safe : Mode_Safe {};
	};
	class PM73Rak_Base: Rifle_Base
	{
		modes[] = { "Safe", "FullAuto"};
		class Safe : Mode_Safe {};
	};
	class Archery_Base;
	class Crossbow_Base : Archery_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class M79_Base : Rifle_Base
	{
		modes[] = { "Safe", "Single" };
		class Safe : Mode_Safe {};
	};
	class SCARH_Base: Rifle_Base
	{
		modes[] = { "Safe", "SemiAuto","FullAuto"};
		class Safe : Mode_Safe {};
	};
}