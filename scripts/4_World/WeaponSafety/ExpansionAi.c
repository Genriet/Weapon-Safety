#ifdef DZ_Expansion_AI
// Make sure that AI bots don't shoot on safe
modded class eAIBase
{
	override bool eAI_CanFire(Weapon_Base weapon)
    {
        if (!super.eAI_CanFire(weapon))
            return false;

        int muzzleIndex = weapon.GetCurrentMuzzle();
        if (weapon.GetCurrentMode(muzzleIndex) == weapon.WeaponSafety_GetSafetyIndex())
        {
			if (weapon.Expansion_SetFireMode(ExpansionFireMode.Single)) {}
			else weapon.Expansion_SetFireMode(ExpansionFireMode.SemiAuto);
            return true;
        }

        return true;
    }
};
#endif