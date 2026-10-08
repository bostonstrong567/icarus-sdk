// /Script/UMG.SafeZoneSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/SafeZoneSlot.h

UCLASS()
class USafeZoneSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsTitleSafe;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin SafeAreaScale;  // 0x003C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HAlign;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VAlign;  // 0x004D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0050, size 0x10
};
