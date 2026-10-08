// /Script/Engine.AnimControlTrackKey
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackAnimControl.h

USTRUCT()
struct FAnimControlTrackKey
{
    UPROPERTY() float StartTime;  // 0x0000, size 0x4
    UPROPERTY() UAnimSequence* AnimSeq;  // 0x0008, size 0x8
    UPROPERTY() float AnimStartOffset;  // 0x0010, size 0x4
    UPROPERTY() float AnimEndOffset;  // 0x0014, size 0x4
    UPROPERTY() float AnimPlayRate;  // 0x0018, size 0x4
    UPROPERTY() uint8 bLooping : 1;  // 0x001C, mask 0x01
    UPROPERTY() uint8 bReverse : 1;  // 0x001C, mask 0x02
};
