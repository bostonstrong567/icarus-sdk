// /Script/Icarus.KeyIconData
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/KeyIcons/KeyIconsTable.h

USTRUCT()
struct FKeyIconData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FKey> Keys;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideText;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EControllerIconSet IconSet;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* IconPress;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* IconHold;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor IconTint;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TextColor;  // 0x0050, size 0x10
};
