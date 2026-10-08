// /Game/BP/Player/BP_IcarusPlayerControllerServer.BP_IcarusPlayerControllerServer_C
// Derives from: AIcarusPlayerControllerServer > AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0x830, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_IcarusPlayerControllerServer_C : public AIcarusPlayerControllerServer, public IUIControllerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0820, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterfaceServer_C* UserInterface;  // 0x0828, size 0x8

    UFUNCTION() void BndEvt__BP_IcarusPlayerControllerServer_PlayerDataComponent_K2Node_ComponentBoundEvent_0_OnMetaInventoryChanged__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerControllerServer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetUserInterface(UUMG_UserInterface_Base_C*& UserInterface) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UUserInterfaceBase* GetUserInterfaceInternal() const;  // parameters 0x8
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
