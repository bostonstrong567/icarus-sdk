// /Script/DragonIKPlugin.EIKTrace_Type_Plugin
UENUM()
enum class EIKTrace_Type_Plugin : uint8
{
    ENUM_LineTrace_Type = 0,
    ENUM_SphereTrace_Type = 1,
    ENUM_BoxTrace_Type = 2,
};

// /Script/DragonIKPlugin.EIK_Type_Plugin
UENUM()
enum class EIK_Type_Plugin : uint8
{
    ENUM_Two_Bone_Ik = 0,
    ENUM_Single_Bone_Ik = 1,
};

// /Script/DragonIKPlugin.EInputTransformSpace_DragonIK
UENUM()
enum class EInputTransformSpace_DragonIK : uint8
{
    ENUM_WorldSpaceSystem = 0,
    ENUM_ComponentSpaceSystem = 1,
};

// /Script/DragonIKPlugin.EInterpoLocation_Type_Plugin
UENUM()
enum class EInterpoLocation_Type_Plugin : uint8
{
    ENUM_DivisiveLoc_Interp = 0,
    ENUM_LegacyLoc_Interp = 1,
};

// /Script/DragonIKPlugin.EInterpoRotation_Type_Plugin
UENUM()
enum class EInterpoRotation_Type_Plugin : uint8
{
    ENUM_DivisiveRot_Interp = 0,
    ENUM_LegacyRot_Interp = 1,
};

// /Script/DragonIKPlugin.EPole_System_DragonIK
UENUM()
enum class EPole_System_DragonIK : uint8
{
    ENUM_SinglePoleSystem = 0,
    ENUM_NSEWPoleSystem = 1,
};

// /Script/DragonIKPlugin.ERefPosePluginEnum
UENUM()
enum class ERefPosePluginEnum : uint8
{
    VE_Animated = 0,
    VE_Rest = 1,
};

// /Script/DragonIKPlugin.ERotation_Type_DragonIK
UENUM()
enum class ERotation_Type_DragonIK : uint8
{
    ENUM_AdditiveRotation = 0,
    ENUM_ReplaceRotation = 1,
};

// /Script/DragonIKPlugin.ESolverComplexityPluginEnum
UENUM()
enum class ESolverComplexityPluginEnum : uint8
{
    VE_Simple = 0,
    VE_Complex = 1,
};

// /Script/DragonIKPlugin.ETwist_Type_DragonIK
UENUM()
enum class ETwist_Type_DragonIK : uint8
{
    ENUM_PoseAxisTwist = 0,
    ENUM_UpAxisTwist = 1,
};
