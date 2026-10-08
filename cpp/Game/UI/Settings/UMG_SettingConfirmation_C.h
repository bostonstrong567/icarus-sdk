// /Game/UI/Settings/UMG_SettingConfirmation.UMG_SettingConfirmation_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingConfirmation_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* No;  // 0x0268, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock;  // 0x0270, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_113;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Yes;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FResult Result;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Remaining;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemainingInt;  // 0x02B4, size 0x4

    UFUNCTION() void BndEvt__UMG_BasicButton_147_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_SettingConfirmation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Result__DelegateSignature(bool Result);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
