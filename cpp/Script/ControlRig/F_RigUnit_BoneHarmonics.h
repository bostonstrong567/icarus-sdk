// /Script/ControlRig.RigUnit_BoneHarmonics
// size 0xE8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h

USTRUCT()
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;  // 0x0068, size 0x10
    UPROPERTY() FVector WaveSpeed;  // 0x0078, size 0xC
    UPROPERTY() FVector WaveFrequency;  // 0x0084, size 0xC
    UPROPERTY() FVector WaveAmplitude;  // 0x0090, size 0xC
    UPROPERTY() FVector WaveOffset;  // 0x009C, size 0xC
    UPROPERTY() FVector WaveNoise;  // 0x00A8, size 0xC
    UPROPERTY() EControlRigAnimEasingType WaveEase;  // 0x00B4, size 0x1
    UPROPERTY() float WaveMinimum;  // 0x00B8, size 0x4
    UPROPERTY() float WaveMaximum;  // 0x00BC, size 0x4
    UPROPERTY() EControlRigRotationOrder RotationOrder;  // 0x00C0, size 0x1
    UPROPERTY() bool bPropagateToChildren;  // 0x00C1, size 0x1
    UPROPERTY(Transient) FRigUnit_BoneHarmonics_WorkData WorkData;  // 0x00C8, size 0x20
};
