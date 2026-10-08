// /Game/UI/Components/UMG_RadialMenu_ImprovedItemIcon.UMG_RadialMenu_ImprovedItemIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadialMenu_ImprovedItemIcon_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x0260, size 0x8

    UFUNCTION(BlueprintCallable) void Initialise(FItemData ItemData);  // parameters 0x1F0
};
