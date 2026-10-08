// /Game/UI/Windows/UMG_WorldTriggerOperation.UMG_WorldTriggerOperation_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WorldTriggerOperation_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionBoardProspectSelected_C* ProspectSelected;  // 0x0298, size 0x8

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_TriggerMission_ProspectSelected_K2Node_ComponentBoundEvent_6_OperationSelected__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_WorldTriggerOperation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayProspectAudio(FProspectServerInfo Prospect);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void ShowProspect(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void StopProspectAudio();
};
