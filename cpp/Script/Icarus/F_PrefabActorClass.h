// /Script/Icarus.PrefabActorClass
// size 0x40, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabActorClass
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0010, size 0x30
};
