// /Script/Icarus.IcarusItemSpawnParameters
// size 0x90, declared in Icarus/Source/Icarus/Actors/IcarusItemFactory.h

USTRUCT()
struct FIcarusItemSpawnParameters
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Template;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Owner;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* Instigator;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusItemConstructionParameters ConstructionParameters;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ForcedUID;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusItemSpawnParametersAdvanced Advanced;  // 0x0058, size 0x38
};
