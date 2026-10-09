// /Script/Icarus.ActionAnimData
// size 0x80, declared in Icarus/Source/Icarus/AI/IcarusNPCGOAPCharacter.h

USTRUCT()
struct FActionAnimData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> ActionMontage;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, float> PossibleMontageSections;  // 0x0028, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ActionNotify;  // 0x0078, size 0x8
};
