// /Script/Icarus.PrefabTriggerBox
// size 0x40, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabTriggerBox
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BoxExtent;  // 0x0030, size 0xC
};
