// /Game/UI/Components/UMG_DoubleXPEvent.UMG_DoubleXPEvent_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DoubleXPEvent_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Base;  // 0x0268, size 0x8
};
