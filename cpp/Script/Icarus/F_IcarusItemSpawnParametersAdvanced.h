// /Script/Icarus.IcarusItemSpawnParametersAdvanced
// size 0x38, declared in Icarus/Source/Icarus/Actors/IcarusItemFactory.h

USTRUCT()
struct FIcarusItemSpawnParametersAdvanced
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusItem> OverrideActorClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> OverrideMeshPtr;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableActorRecording;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) bool bNoFail;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) bool bDeferConstruction;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere) bool bAllowDuringConstructionScript;  // 0x0033, size 0x1

    // Not reflected:
    EObjectFlags ObjectFlags;  // 0x0034
};
