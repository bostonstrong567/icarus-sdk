// /Game/BP/Debugging/FLODDebugOverlay/UMG_FLODDebugOverlay.UMG_FLODDebugOverlay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FLODDebugOverlay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BTN_SetCollisionRange;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BTN_SetOverlapRange;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_List;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_DestroyedBodies;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_NewBodies;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_TotalBodies;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* TF_OverlapInfluenceRadius;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* TF_PhysRadius;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VB_LoadedTileList;  // 0x02A8, size 0x8

    UFUNCTION() void BndEvt__UMG_FLODDebugOverlay_BTN_SetCollisionRange_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FLODDebugOverlay_BTN_SetOverlapRange_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FLODDebugOverlay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void SlowTick();
};
