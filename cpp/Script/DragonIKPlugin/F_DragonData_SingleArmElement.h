// /Script/DragonIKPlugin.DragonData_SingleArmElement
// size 0x40, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_SingleArmElement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Overrided_Arm_Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Arm_Alpha;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator rotation_offset;  // 0x0034, size 0xC
};
