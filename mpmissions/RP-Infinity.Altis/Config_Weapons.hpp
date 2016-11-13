/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, -1 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125 },
            { "6Rnd_45ACP_Cylinder", "", 150 },
            { "9Rnd_45ACP_Mag", "", 145 },
            { "30Rnd_9x21_Mag", "", 175 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "srifle_DMR_01_F", "", 25000, 2500 },
            { "srifle_EBR_F", "", 30000, 2500 },
            { "LMG_Mk200_F", "", 50000, 2500 },
            { "arifle_Katiba_F", "", 20000, 2500 },
			{ "arifle_Mk20_F", "", 25000, 2500 },
			{ "arifle_MX_SW_F", "", 25000, 2500 },
			{ "arifle_SDAR_F", "", 25000, 2500 },
			{ "SMG_02_F", "", 25000, 2500 },
			{ "srifle_DMR_07_blk_F", "", 25000, 2500 },
			{ "arifle_AK12_F", "", 25000, 2500 },
			{ "arifle_AKM_FL_F", "", 25000, 2500 },
			{ "arifle_CTAR_blk_F", "", 25000, 2500 },
			{ "arifle_SPAR_01_blk_F", "", 25000, 2500 },
			{ "arifle_ARX_blk_F", "", 25000, 2500 },
			{ "launch_NLAW_F", "", 10000000, -1 },
			
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 300 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 300 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 300 },
            { "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 300 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "30Rnd_580x42_Mag_F", "", 300 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "NLAW_F", "", 1500000 }
        };
        accs[] = {
            { "optic_MRCO", "", 3500 },
            { "optic_Arco", "", 3500 },
            { "optic_Hamr", "", 3500 },
            { "optic_ACO_grn", "", 3500 },
			{ "acc_flashlight", "", 3500 },
			{ "acc_pointer_IR", "", 3500 },
			{ "optic_DMS", "", 3500 },
			{ "bipod_01_F_khk", "", 3500 },
			{ "muzzle_snds_M", "", 3500 },
			{ "muzzle_snds_H", "", 3500 },
			{ "muzzle_snds_B", "", 3500 },
			{ "optic_Holosight", "", 3500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, -1 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 95 },
            { "6Rnd_45ACP_Cylinder", "", 120 },
            { "9Rnd_45ACP_Mag", "", 115 },
            { "30Rnd_9x21_Mag", "", 145 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 },
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
			{ "optic_Nightstalker", "", 650 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
