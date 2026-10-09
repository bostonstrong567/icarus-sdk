// /Script/DragonIKPlugin.DragonData_ArmSizeStruct
// size 0xC, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_ArmSizeStruct
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Custom_Arm_Sizes;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float custom_upperArm_length;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float custom_lowerArm_length;  // 0x0008, size 0x4
};
