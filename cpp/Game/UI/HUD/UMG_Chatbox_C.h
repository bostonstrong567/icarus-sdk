// /Game/UI/HUD/UMG_Chatbox.UMG_Chatbox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2AA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Chatbox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeInChat;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutChat;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* HintBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_35;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* TextBox;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initalised;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Typing;  // 0x0291, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxMessageCharacterLength;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FadeOutTimer;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ChatBoxFadeState> State;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeOutDelay;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UnfocusAfterSendMessage;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseUnfocusBehaviour;  // 0x02A9, size 0x1

    UFUNCTION(BlueprintCallable) void AddChatMessage(FIcarusPlayerChatMessage& Message);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void AddLocalMessage(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddServerMessage(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BeginFadeOutTimer();
    UFUNCTION() void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CheckChatBoxVisible();
    UFUNCTION(BlueprintCallable) void ClampMessageLength(FText InMessage, FText& OutMessage, bool& WasClamped);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ClearAndUnfocusTextBox();
    UFUNCTION(BlueprintCallable) void CommitText();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EndTyping();
    UFUNCTION() void ExecuteUbergraph_UMG_Chatbox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_13A3F937400836F18C3C2AA44C299F32();
    UFUNCTION(BlueprintCallable) void Finished_6346353C4787712A7E87BDAF80B3DCC4();
    UFUNCTION(BlueprintCallable) void FocusEntry();
    UFUNCTION(BlueprintCallable) void FocusInputBox();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnFocusLost(FFocusEvent InFocusEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void PlayFadeInAnim();
    UFUNCTION(BlueprintCallable) void PlayFadeOutAnim();
    UFUNCTION(BlueprintCallable) void ScrollToBottom();
    UFUNCTION(BlueprintCallable) void ShowChat();
    UFUNCTION(BlueprintCallable) void ShowChatTyping();
};
