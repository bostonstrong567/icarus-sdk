// /Script/SubstanceCore.SubstanceInstanceDesc
// size 0x20, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceGraphInstance.h

USTRUCT()
struct FSubstanceInstanceDesc
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FSubstanceInputDesc> Inputs;  // 0x0010, size 0x10
};
