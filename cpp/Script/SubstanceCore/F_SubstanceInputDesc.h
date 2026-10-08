// /Script/SubstanceCore.SubstanceInputDesc
// size 0x18, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceGraphInstance.h

USTRUCT()
struct FSubstanceInputDesc
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ESubstanceInputType> Type;  // 0x0010, size 0x1
};
