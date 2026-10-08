// /Game/BP/Tools/CheatFunctions/CF_RestoreLoadout.CF_RestoreLoadout_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_RestoreLoadout_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_1;  // 0x02F0, size 0x8

    UFUNCTION() void BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_RestoreLoadout(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleArg(int32 Index, FString Arg);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnHandleExecute(UDebugProspectRow_C* Row);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
