// /Script/Icarus.FieldGuidePageWidgetBase
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, declared in Icarus/Source/Icarus/FieldGuide/FieldGuidePageWidgetBase.h

UCLASS(EditInlineNew)
class UFieldGuidePageWidgetBase : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnFishLinkClicked OnFishLinkClicked;  // 0x02C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnBeastLinkClicked OnBeastLinkClicked;  // 0x02D8, size 0x10
};
