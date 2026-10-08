// /Script/Icarus.AIStateVocalisation
// size 0x48, declared in Icarus/Source/Icarus/DataStructs/Audio/AIAudioData.h

USTRUCT()
struct FAIStateVocalisation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle StateEnteredVocalisation;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle StatePersistentVocalisation;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle StateExitedVocalisation;  // 0x0030, size 0x18
};
