// /Game/UI/Hab/DropTerminal/UMG_DropPointInformation.UMG_DropPointInformation_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropPointInformation_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SlideIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Recommended;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Recommended_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_62;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_DropBackground;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_DropName;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_SelectDrop;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_NegativeAttributes;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_PositiveAttributes;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDropPointSelected DropPointSelected;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropGroupsRowHandle DropGroup;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Left;  // 0x02E0, size 0x1

    UFUNCTION(BlueprintCallable) void AddNextAttribute(UWidget* Content);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AnimatedRemoveFromParent();
    UFUNCTION() void BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ConvertAttributeToInfo(EDropAbundance Enum, FText& Text, bool& Negative);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void DropPointSelected__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_DropPointInformation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveWidget();
    UFUNCTION(BlueprintCallable) void SetAttributes();
};
