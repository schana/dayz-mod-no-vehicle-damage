class CfgPatches
{
	class SchanaModNoVehicleDamage
	{
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class SchanaModNoVehicleDamage
	{
	    type = "mod";
		
	    class defs
	    {
			class worldScriptModule		
            {
                value = "";
                files[] = {"SchanaModNoVehicleDamage/World"};
            };
        };
    };
};
