// /Script/Icarus.BestiaryTraitData
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BestiaryTraitsLibrary.generated.h

USTRUCT()
struct FBestiaryTraitData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TraitName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryTraitTypesRowHandle Type;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OverrideColor;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> OverrideIcon;  // 0x0058, size 0x28
};
