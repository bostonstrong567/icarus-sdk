// /Script/Icarus.HighlightableData
// size 0x78, declared in Icarus/Source/Icarus/Traits/Behaviours/HighlightableData.h

USTRUCT()
struct FHighlightableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UHighlightableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableMeshOutline;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableTooltip;  // 0x0071, size 0x1
};
