// /Script/Icarus.CraftingAudioData
// size 0x98, declared in Icarus/Source/Icarus/DataStructs/Audio/CraftingAudioData.h

USTRUCT()
struct FCraftingAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> RecipeCraftedSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FProcessingRowHandle, TSoftObjectPtr<UFMODEvent>> ProcessorOverrideSounds;  // 0x0040, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOnlyPlayForLastItemInQueue;  // 0x0090, size 0x1
};
