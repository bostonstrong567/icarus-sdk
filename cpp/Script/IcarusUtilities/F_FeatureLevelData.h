// /Script/IcarusUtilities.FeatureLevelData
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/IcarusUtilities/FeatureLevelsLibrary.generated.h

USTRUCT()
struct FFeatureLevelData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ShortName;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Description;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Color;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableForCook;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableForShip;  // 0x0091, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableForPreview;  // 0x0092, size 0x1
};
