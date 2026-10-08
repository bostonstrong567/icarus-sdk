// /Game/BP/DropShipEditor/BP_DropshipEditorPlayerController.BP_DropshipEditorPlayerController_C
// Derives from: APlayerController > AController > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_DropshipEditorPlayerController_C : public APlayerController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_DropshipEditor_C* UserInterface;  // 0x0598, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DropshipEditorPlayerController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
