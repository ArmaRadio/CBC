#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"live_radio_main"};
        author = "BrettMayson";
        VERSION_CONFIG;
    };
};

class CfgRadioStations {
    class CBCMusicAtlantic {
        name = "CBC Music (Atlantic)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r2_hfx";
    };

    class CBCMusicCentral {
        name = "CBC Music (Central)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r2_wpg";
    };

    class CBCMusicEastern {
        name = "CBC Music (Eastern)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r2_tor";
    };

    class CBCMusicMountain {
        name = "CBC Music (Mountain)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r2_edm";
    };

    class CBCMusicPacific {
        name = "CBC Music (Pacific)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r2_vcr";
    };

    class CBCRadio1Calgary {
        name = "CBC Radio 1 (AB/Calgary)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_cgy";
    };

    class CBCRadio1Edmonton {
        name = "CBC Radio 1 (AB/Edmonton)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_edm";
    };

    class CBCRadio1Kamloops {
        name = "CBC Radio 1 (BC/Kamloops)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_kam";
    };

    class CBCRadio1Kelowna {
        name = "CBC Radio 1 (BC/Kelowna)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_kel";
    };

    class CBCRadio1PrinceGeorge {
        name = "CBC Radio 1 (BC/Prince George)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_prg";
    };

    class CBCRadio1Vancouver {
        name = "CBC Radio 1 (BC/Vancouver)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_vcr";
    };

    class CBCRadio1Victoria {
        name = "CBC Radio 1 (BC/Victoria)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_vic";
    };

    class CBCRadio1Winnipeg {
        name = "CBC Radio 1 (MB/Winnipeg)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_wpg";
    };

    class CBCRadio1Fredericton {
        name = "CBC Radio 1 (NB/Fredericton)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_frd";
    };

    class CBCRadio1Moncton {
        name = "CBC Radio 1 (NB/Moncton)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_mct";
    };

    class CBCRadio1SaintJohn {
        name = "CBC Radio 1 (NB/Saint John)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_snb";
    };

    class CBCRadio1CornerBrook {
        name = "CBC Radio 1 (NF/Corner Brook)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_cor";
    };

    class CBCRadio1GooseBay {
        name = "CBC Radio 1 (NF/Goose Bay)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_gba";
    };

    class CBCRadio1GrandFalls {
        name = "CBC Radio 1 (NF/Grand Falls)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_gfa";
    };

    class CBCRadio1StJohns {
        name = "CBC Radio 1 (NF/St. John's)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_snf";
    };

    class CBCRadio1Halifax {
        name = "CBC Radio 1 (NS/Halifax)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_hfx";
    };

    class CBCRadio1Sydney {
        name = "CBC Radio 1 (NS/Sydney)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_syd";
    };

    class CBCRadio1Inuvik {
        name = "CBC Radio 1 (NT/Inuvik)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ink";
    };

    class CBCRadio1Yellowknife {
        name = "CBC Radio 1 (NT/Yellowknife)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ykn";
    };

    class CBCRadio1Iqaluit {
        name = "CBC Radio 1 (NU/Iqaluit)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_iqa";
    };

    class CBCRadio1Barrie {
        name = "CBC Radio 1 (ON/Barrie)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_eri";
    };

    class CBCRadio1Kingston {
        name = "CBC Radio 1 (ON/Kingston)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_eki";
    };

    class CBCRadio1KitchenerWaterloo {
        name = "CBC Radio 1 (ON/Kitchener-Waterloo)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ekw";
    };

    class CBCRadio1London {
        name = "CBC Radio 1 (ON/London)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ldn";
    };

    class CBCRadio1Ottawa {
        name = "CBC Radio 1 (ON/Ottawa)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ott";
    };

    class CBCRadio1Peterborough {
        name = "CBC Radio 1 (ON/Peterborough)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_eri1";
    };

    class CBCRadio1Sudbury {
        name = "CBC Radio 1 (ON/Sudbury)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_sud";
    };

    class CBCRadio1ThunderBay {
        name = "CBC Radio 1 (ON/Thunder Bay)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_tba";
    };

    class CBCRadio1Toronto {
        name = "CBC Radio 1 (ON/Toronto)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_tor";
    };

    class CBCRadio1Windsor {
        name = "CBC Radio 1 (ON/Windsor)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_wdr";
    };

    class CBCRadio1Charlottetown {
        name = "CBC Radio 1 (PEI/Charlottetown)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_chr";
    };

    class CBCRadio1Montreal {
        name = "CBC Radio 1 (QC/Montréal)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_mtl";
    };

    class CBCRadio1NordQuebec {
        name = "CBC Radio 1 (QC/Nord Québec)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ecb";
    };

    class CBCRadio1QuebecCity {
        name = "CBC Radio 1 (QC/Québec City)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_qqu";
    };

    class CBCRadio1Regina {
        name = "CBC Radio 1 (SK/Regina)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_reg";
    };
    

    class CBCRadio1Saskatoon {
        name = "CBC Radio 1 (SK/Saskatoon)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_ssk";
    };
    

    class CBCRadio1Whitehorse {
        name = "CBC Radio 1 (YT/Whitehorse)";
        url = "http://cbcmp3.ic.llnwd.net/stream/cbcmp3_cbc_r1_whs";
    };
};
