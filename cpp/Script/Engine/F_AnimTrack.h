// /Script/Engine.AnimTrack
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h

USTRUCT()
struct FAnimTrack
{
public:
    UPROPERTY(EditAnywhere) TArray<FAnimSegment> AnimSegments;  // 0x0000, size 0x10
};
