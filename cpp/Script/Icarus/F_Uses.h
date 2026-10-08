// /Script/Icarus.Uses
// size 0x58, declared in Icarus/Source/Icarus/Traits/Behaviours/UsableData.h

USTRUCT()
struct FUses : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DescriptionText;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0030, size 0x28
};
