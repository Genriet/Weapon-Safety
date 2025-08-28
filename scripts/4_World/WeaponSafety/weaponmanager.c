modded class WeaponManager
{
    // All weapons
    override bool CanFire(Weapon_Base wpn)
    {
        if (WeaponSafety_GetCurrentMode() == wpn.WeaponSafety_GetSafetyIndex())
        {
            return false;
        }
        return super.CanFire(wpn);
    };

	// Weapons with bolt manipulation enabled
    // Unfortunatelly I didn't find a way to block reload after attaching magazine, hopefully BI fixes this https://feedback.bistudio.com/T189203
    override bool CanLoadBullet(Weapon_Base wpn, Magazine mag, bool reservationCheck = true)
    {
        if (WeaponSafety_GetCurrentMode() == wpn.WeaponSafety_GetSafetyIndex() && wpn.WeaponSafety_SafetyBlocksBolt())
        {
            return false;
        }
        return super.CanLoadBullet(wpn, mag, reservationCheck);
    }

    override bool CanUnjam(Weapon_Base wpn, bool reservationCheck = true)
    {
        if (WeaponSafety_GetCurrentMode() == wpn.WeaponSafety_GetSafetyIndex() && wpn.WeaponSafety_SafetyBlocksBolt())
        {
            return false;
        }
        return super.CanUnjam(wpn, reservationCheck);
    }

    override bool CanEjectBullet(Weapon_Base wpn, bool reservationCheck = true)
    {
        if (WeaponSafety_GetCurrentMode() == wpn.WeaponSafety_GetSafetyIndex() && wpn.WeaponSafety_SafetyBlocksBolt())
        {
            return false;
        }
        return super.CanEjectBullet(wpn, reservationCheck);
    }

    int WeaponSafety_GetCurrentMode()
    {
        if (m_WeaponInHand)
        {
            int mi = m_WeaponInHand.GetCurrentMuzzle();
            return m_WeaponInHand.GetCurrentMode(mi);
        }
        return -1;
    }
};