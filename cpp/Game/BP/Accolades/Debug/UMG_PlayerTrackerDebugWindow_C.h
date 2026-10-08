// /Game/BP/Accolades/Debug/UMG_PlayerTrackerDebugWindow.UMG_PlayerTrackerDebugWindow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerTrackerDebugWindow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_2;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_67;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* CachedAtmosphere;  // 0x0278, size 0x8

    UFUNCTION() void BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerTrackerDebugWindow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnPlayerTrackerUpdated_Event_0(FPlayerTrackersRowHandle PlayerTracker, int32 OldValue, int32 NewValue);  // parameters 0x20
};
