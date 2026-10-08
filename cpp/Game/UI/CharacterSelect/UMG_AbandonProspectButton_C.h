// /Game/UI/CharacterSelect/UMG_AbandonProspectButton.UMG_AbandonProspectButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AbandonProspectButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_100;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LoadBar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Square;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAbandonButtonClicked AbandonButtonClicked;  // 0x0288, size 0x10

    UFUNCTION(BlueprintCallable) void AbandonButtonClicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_AbandonProspectButton_UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_AbandonProspectButton(int32 EntryPoint);  // parameters 0x4
};
