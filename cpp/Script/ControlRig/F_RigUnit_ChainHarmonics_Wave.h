// /Script/ControlRig.RigUnit_ChainHarmonics_Wave
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h

USTRUCT()
struct FRigUnit_ChainHarmonics_Wave
{
    UPROPERTY() bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY() FVector WaveFrequency;  // 0x0004, size 0xC
    UPROPERTY() FVector WaveAmplitude;  // 0x0010, size 0xC
    UPROPERTY() FVector WaveOffset;  // 0x001C, size 0xC
    UPROPERTY() FVector WaveNoise;  // 0x0028, size 0xC
    UPROPERTY() float WaveMinimum;  // 0x0034, size 0x4
    UPROPERTY() float WaveMaximum;  // 0x0038, size 0x4
    UPROPERTY() EControlRigAnimEasingType WaveEase;  // 0x003C, size 0x1
};
