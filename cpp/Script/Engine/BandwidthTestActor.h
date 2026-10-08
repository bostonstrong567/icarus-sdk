// /Script/Engine.BandwidthTestActor
// Derives from: AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Public/Net/BandwidthTestActor.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class ABandwidthTestActor : public AActor
{
public:
    UPROPERTY(Replicated) FBandwidthTestGenerator BandwidthGenerator;  // 0x0220, size 0x20
};
