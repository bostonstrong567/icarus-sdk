// /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h

USTRUCT()
struct FRigUnit_ChainHarmonics_WorkData
{
    UPROPERTY() FVector Time;  // 0x0000, size 0xC
    UPROPERTY() TArray<FCachedRigElement> Items;  // 0x0010, size 0x10
    UPROPERTY() TArray<float> Ratio;  // 0x0020, size 0x10
    UPROPERTY() TArray<FVector> LocalTip;  // 0x0030, size 0x10
    UPROPERTY() TArray<FVector> PendulumTip;  // 0x0040, size 0x10
    UPROPERTY() TArray<FVector> PendulumPosition;  // 0x0050, size 0x10
    UPROPERTY() TArray<FVector> PendulumVelocity;  // 0x0060, size 0x10
    UPROPERTY() TArray<FVector> HierarchyLine;  // 0x0070, size 0x10
    UPROPERTY() TArray<FVector> VelocityLines;  // 0x0080, size 0x10
};
