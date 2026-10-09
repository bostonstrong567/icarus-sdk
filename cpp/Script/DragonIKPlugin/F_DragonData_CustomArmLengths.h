// /Script/DragonIKPlugin.DragonData_CustomArmLengths
// size 0x10, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_CustomArmLengths
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDragonData_ArmSizeStruct> CustomArmSizeArray;  // 0x0000, size 0x10
};
