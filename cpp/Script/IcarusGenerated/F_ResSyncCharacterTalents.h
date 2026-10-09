// /Script/IcarusGenerated.ResSyncCharacterTalents
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResSyncCharacterTalents.h

USTRUCT()
struct FResSyncCharacterTalents
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x0008, size 0x10
};
