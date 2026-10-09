// /Script/Icarus.DropGroupAttribute
// size 0x58, declared in Icarus/Source/Icarus/World/DropGroupData.h

USTRUCT()
struct FDropGroupAttribute
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AttributeTitle;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> AttributeIcon;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AttributeQuality;  // 0x0040, size 0x18
};
