class paraDrop
{
    text = "Paratroops";
    submenu = "";
    expression = "[_this select 0, _this select 1, 'paraTroop', 'B_T_VTOL_01_vehicle_F'] remoteExec ['killPoints_fnc_support', 2];";
    icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\attack_ca.paa";
    cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa";
    enable = "1";
    removeAfterExpressionCall = 0;
};

class reconUAV
{
    text = "Recon UAV";
    submenu = "";
    expression = "[_this select 0, _this select 1, 'reconUAV', 'B_UAV_01_F'] remoteExec ['killPoints_fnc_support', 2];";
    icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\defend_ca.paa";
    cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa";
    enable = "1";
    removeAfterExpressionCall = 0;
};

class airStrike
{
    text = "Bombing Run";
    submenu = "";
    expression = "[_this select 0, _this select 1, 'airStrike', 'B_Plane_CAS_01_DynamicLoadout_F'] remoteExec ['killPoints_fnc_support', 2];";
    icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\cas_ca.paa";
    cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa";
    enable = "1";
    removeAfterExpressionCall = 0;
};
