// /Script/Engine.Layer
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Layers/Layer.h

UCLASS(MinimalAPI)
class ULayer : public UObject
{
public:
    UPROPERTY() FName LayerName;  // 0x0028, size 0x8
    UPROPERTY() uint8 bIsVisible : 1;  // 0x0030, mask 0x01
    UPROPERTY(Transient) TArray<FLayerActorStats> ActorStats;  // 0x0038, size 0x10
};
