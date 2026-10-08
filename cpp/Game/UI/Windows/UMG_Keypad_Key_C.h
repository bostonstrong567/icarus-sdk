// /Game/UI/Windows/UMG_Keypad_Key.UMG_Keypad_Key_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Keypad_Key_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_56;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_48;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Letters;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextNumber;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FButtonClicked ButtonClicked;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Number;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02A0, size 0x18

    UFUNCTION() void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ButtonClicked__DelegateSignature(int32 Number);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Keypad_Key(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
