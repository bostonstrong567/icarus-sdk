// /Script/Icarus.ItemAudioAnimData
// size 0x10, declared in Icarus/Source/Icarus/DataStructs/Audio/ItemAudioData.h

USTRUCT()
struct FItemAudioAnimData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UFMODEvent>> FMODEvents;  // 0x0000, size 0x10
};
