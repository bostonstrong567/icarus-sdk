// /Script/Engine.SoundNodeQualityLevel
// Derives from: USoundNode > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeQualityLevel.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeQualityLevel : public USoundNode
{
public:
    UPROPERTY() int32 CookedQualityLevelIndex;  // 0x0048, size 0x4

    // Virtual functions that start here:
    //   ForCurrentQualityLevel
};
