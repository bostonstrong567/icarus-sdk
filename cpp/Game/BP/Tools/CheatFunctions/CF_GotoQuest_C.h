// /Game/BP/Tools/CheatFunctions/CF_GotoQuest.CF_GotoQuest_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_GotoQuest_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* Marker;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* SaveButton;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, AActor*> Out_Actors;  // 0x02F8, size 0x50, named "Out Actors"

    UFUNCTION() void BndEvt__CF_GotoQuest_SaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_GotoQuest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetMarker();  // parameters 0x8
};
