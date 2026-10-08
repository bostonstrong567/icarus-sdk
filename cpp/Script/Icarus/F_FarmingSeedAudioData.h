// /Script/Icarus.FarmingSeedAudioData
// size 0x78, declared in Icarus/Source/Icarus/DataStructs/FarmingSeedData.h

USTRUCT()
struct FFarmingSeedAudioData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PlantedSound;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> HarvestedSound;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> ClearedSound;  // 0x0050, size 0x28
};
