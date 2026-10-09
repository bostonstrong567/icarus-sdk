// /Script/Icarus.RiverAudioData
// size 0x48, declared in Icarus/Source/Icarus/DataStructs/Audio/RiverAudioData.h

USTRUCT()
struct FRiverAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Sound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNeedsAudioContext;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUsesLavaFlowPoints;  // 0x0041, size 0x1
};
