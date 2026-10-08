// /Script/DragonIKPlugin.DragonData_FingerData
// size 0x20, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_FingerData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Finger_Bone_Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Scale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Offset;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Finger_Backward;  // 0x0018, size 0x1

    // Not reflected:
    float chain_number;  // 0x001C
};
