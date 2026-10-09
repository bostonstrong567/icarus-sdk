// /Script/SubstanceCore.SubstanceIntInputDesc
// size 0x48, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceGraphInstance.h

USTRUCT()
struct FSubstanceIntInputDesc : public FSubstanceInputDesc
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<int32> Min;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<int32> Max;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<int32> Default;  // 0x0038, size 0x10
};
