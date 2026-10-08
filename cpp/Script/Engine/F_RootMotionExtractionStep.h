// /Script/Engine.RootMotionExtractionStep
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h

USTRUCT()
struct FRootMotionExtractionStep
{
    UPROPERTY() UAnimSequence* AnimSequence;  // 0x0000, size 0x8
    UPROPERTY() float StartPosition;  // 0x0008, size 0x4
    UPROPERTY() float EndPosition;  // 0x000C, size 0x4
};
