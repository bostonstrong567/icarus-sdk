// /Script/Icarus.ResourceNodeAudioData
// size 0x68, declared in Icarus/Source/Icarus/DataStructs/Audio/ResourceNodeAudioData.h

USTRUCT()
struct FResourceNodeAudioData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> HarvestSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> NodeDepletedSound;  // 0x0040, size 0x28
};
