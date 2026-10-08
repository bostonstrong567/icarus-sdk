// /Script/Engine.LayerActorStats
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Layers/Layer.h

USTRUCT()
struct FLayerActorStats
{
    UPROPERTY() TSubclassOf<UObject> Type;  // 0x0000, size 0x8
    UPROPERTY() int32 Total;  // 0x0008, size 0x4
};
