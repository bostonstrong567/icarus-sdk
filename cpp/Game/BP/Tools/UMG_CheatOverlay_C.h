// /Game/BP/Tools/UMG_CheatOverlay.UMG_CheatOverlay_C
// Derives from: UCheatOverlayBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CheatOverlay_C : public UCheatOverlayBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SearchBox_C* SearchBar;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2_C_1;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* WidgetList;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TSoftObjectPtr<UCheatFunctionBase> TopFunction;  // 0x0380, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_CheatFunctionBorder_C*> CheatWidgets;  // 0x03A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECheatContext> Context;  // 0x03B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Changed;  // 0x03B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueuePreview;  // 0x03BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PreviewText;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UCheatFunctionBase*> FilteredWidgets;  // 0x03D0, size 0x10

    UFUNCTION(BlueprintImplementableEvent) void AddCheat(UCheatFunctionBase* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void AddCustomAutomationFunction(FString Name, const TArray<FString>& ScriptLines, FString Description);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void AddCustomAutomationFunctionImpl(FString Name, const TArray<FString>& Instructions, FString Description);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void AddCustomFunction(FString Name, const TArray<FString>& ScriptLines, FString Description);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void AddCustomFunctionImpl(FString Name, const TArray<FString>& Instructions, FString Description);  // parameters 0x30
    UFUNCTION() void AddFilteredWidget(UCheatFunctionBase* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature(const FKeyEvent& KeyEvent);  // parameters 0x38
    UFUNCTION() void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BuildWidget();
    UFUNCTION(BlueprintImplementableEvent) void ClearFilteredWidgets();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CheatOverlay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility GetPanelVisibility();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetTopFunction(UCheatFunctionBase*& Top);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HidePanelDisplay();
    UFUNCTION(BlueprintCallable) void OnAddCheat(UCheatFunctionBase* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnSetFilteredWidgets(TArray<UCheatFunctionBase*>& Array);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnShowChanged(bool bNewShow);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnWaitingChanged(bool bNewWaiting);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RequestReloadCheats();
    UFUNCTION(BlueprintImplementableEvent) void SetFilteredWidgets(const TArray<UCheatFunctionBase*>& Widgets);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTopFunction(UCheatFunctionBase* NewTop);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup(TEnumAsByte<ECheatContext> Context);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Toggle();
    UFUNCTION(BlueprintCallable) void UpdateVisibility();
};
