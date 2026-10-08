// /Game/UI/Components/UMG_ServerProviderButton.UMG_ServerProviderButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x299, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ServerProviderButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_14;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProviderImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_0;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Image;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Address;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EStretch> In_Stretch;  // 0x0298, size 0x1, named "In Stretch"

    UFUNCTION() void BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ServerProviderButton(int32 EntryPoint);  // parameters 0x4
};
