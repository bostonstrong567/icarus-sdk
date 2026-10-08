// /Game/UI/Debug/UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EnvAudioDebugStats_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* CloseButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* RefreshButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* RiverScrollView;  // 0x0278, size 0x8
    UPROPERTY(Instanced) UTextBlock* Summary;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RiverCount;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RiverAudioCount;  // 0x028C, size 0x4

    UFUNCTION(BlueprintCallable) void AddRowToScrollView(FString Message);  // parameters 0x10
    UFUNCTION() void BndEvt__Refresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_EnvAudioDebugStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRiverDebugData(ABP_InteractableRiver_C* River, FString& DebugMessage, bool& RiverAudioIsValid, FVector& RiverAudioLocation);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSummaryText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateRiverDebug();
};
