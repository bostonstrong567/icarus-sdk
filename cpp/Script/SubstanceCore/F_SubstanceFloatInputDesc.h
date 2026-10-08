// /Script/SubstanceCore.SubstanceFloatInputDesc
// size 0x48, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceGraphInstance.h

USTRUCT()
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<float> Min;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<float> Max;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<float> Default;  // 0x0038, size 0x10
};
