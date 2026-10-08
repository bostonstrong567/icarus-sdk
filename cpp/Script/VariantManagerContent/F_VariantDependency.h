// /Script/VariantManagerContent.VariantDependency
// size 0x58, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/Variant.h

USTRUCT()
struct FVariantDependency
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UVariantSet> VariantSet;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UVariant> Variant;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnabled;  // 0x0050, size 0x1
};
