// /Game/Developers/francisliardet/UI/UMG_Transform_Tool.UMG_Transform_Tool_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x351, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Transform_Tool_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Button_Confirm;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_MouseBlocker;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_RX;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_RY;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_RZ;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_SX;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_SY;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_SZ;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_TX;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_TY;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_TZ;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText_ActorName;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon_Reset;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon_SwitchCoords;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Main;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EActionableEventType Event_Type;  // 0x0308, size 0x1, named "Event Type"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Transform_Tool_C* ToolBehaviour;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Trace_Hit_Actor;  // 0x0318, size 0x8, named "Trace Hit Actor"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform OriginalTransform;  // 0x0320, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLocalCoords;  // 0x0350, size 0x1

    UFUNCTION() void BndEvt__UMG_Transform_Tool_Button_Confirm_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Transform_Tool_UMG_ButtonIcon_Reset_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Transform_Tool_UMG_ButtonIcon_SwitchCoords_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Transform_Tool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnValueChanged(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSliderValues(FTransform Transform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void UpdateLinkedActorTransform();
};
