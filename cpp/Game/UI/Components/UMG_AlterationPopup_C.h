// /Game/UI/Components/UMG_AlterationPopup.UMG_AlterationPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AlterationPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NotActiveAnimation;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ProvidingAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RecievingAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_51;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceNetworkComponent* ResourceComponent;  // 0x02A8, size 0x8

    UFUNCTION(BlueprintCallable) void Setup(FAlterationsRowHandle Alteration);  // parameters 0x18
};
