// /Game/UI/Windows/UMG_Keypad.UMG_Keypad_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x341, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Keypad_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Password;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_3;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_4;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_5;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_6;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_7;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_8;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_9;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_10;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keypad_Key_C* UMG_Keypad_Key_11;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_Titlebar;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* UniformGridPanel_89;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CorrectPassword;  // 0x0328, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClearNext;  // 0x0340, size 0x1

    UFUNCTION() void BndEvt__UMG_Keypad_UMG_Keypad_Key_11_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(int32 Number);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Keypad(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void KeyPressed(int32 Number);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
};
