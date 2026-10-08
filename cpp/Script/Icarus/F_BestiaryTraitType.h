// /Script/Icarus.BestiaryTraitType
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BestiaryTraitTypesLibrary.generated.h

USTRUCT()
struct FBestiaryTraitType : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Color;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0028, size 0x28
};
