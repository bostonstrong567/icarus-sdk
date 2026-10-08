// /Game/BP/Systems/TitleScreen/BP_TitleScreenController.BP_TitleScreenController_C
// Derives from: AIcarusTitlePlayerController > APlayerController > AController > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_TitleScreenController_C : public AIcarusTitlePlayerController, public IUIControllerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_TitleScreen_C* UserInterface;  // 0x0598, size 0x8

    UFUNCTION(BlueprintCallable) void CreateUI();
    UFUNCTION() void ExecuteUbergraph_BP_TitleScreenController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetUserInterface(UUMG_UserInterface_Base_C*& UserInterface) const;  // parameters 0x8
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnBeginRetryJoinServer(int32 JoinAttempt, int32 MaxAttempts);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnEndRetryJoinServer();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetConnectingUI();
};
