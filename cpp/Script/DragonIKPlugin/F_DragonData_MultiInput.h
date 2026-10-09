// /Script/DragonIKPlugin.DragonData_MultiInput
// size 0x20, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_MultiInput
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Start_Spine;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Pelvis;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDragonData_FootData> FeetBones;  // 0x0010, size 0x10
};
