// /Game/UI/Components/UMG_Alteration.UMG_Alteration_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Alteration_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NotActiveAnimation;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ProvidingAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RecievingAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlterationIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlterationIcon_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBacking;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceNetworkComponent* ResourceComponent;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsRowHandle Alteration;  // 0x0298, size 0x18

    UFUNCTION(BlueprintCallable) void Add_Tool_Tip(FText TooltipText);  // parameters 0x18, named "Add Tool Tip"
    UFUNCTION(BlueprintCallable) void Setup(FAlterationsRowHandle Alteration);  // parameters 0x18
};
