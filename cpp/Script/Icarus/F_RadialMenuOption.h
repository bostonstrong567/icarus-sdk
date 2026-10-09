// /Script/Icarus.RadialMenuOption
// size 0x70, declared in Icarus/Source/Icarus/DataStructs/RadialMenuData.h

USTRUCT()
struct FRadialMenuOption : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRadialOptionsRowHandle RadialOption;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayText;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0048, size 0x28
};
