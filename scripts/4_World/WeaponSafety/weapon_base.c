modded class Weapon_Base
{
	protected int WeaponSafety_SafetyIndex;
	protected bool WeaponSafety_BlocksBolt;

	void Weapon_Base()
	{
		TStringArray WeaponSafety_DayzIsRetarded = new TStringArray;
		ConfigGetTextArray("modes", WeaponSafety_DayzIsRetarded);
		WeaponSafety_SafetyIndex = WeaponSafety_DayzIsRetarded.Find("Safe");

		WeaponSafety_BlocksBolt = ConfigGetBool("safetyBlocksBolt");
	}

	int WeaponSafety_GetSafetyIndex()
	{
		return WeaponSafety_SafetyIndex;
	}

	bool WeaponSafety_SafetyBlocksBolt()
	{
		return WeaponSafety_BlocksBolt;
	}

	// Necessary for multi-barrel weapons
	override void SetNextWeaponMode(int muzzleIndex)
	{
		for (int i = 0; i < GetMuzzleCount(); i++)
		{
			SetNextMuzzleMode(i);
		}
	}
};