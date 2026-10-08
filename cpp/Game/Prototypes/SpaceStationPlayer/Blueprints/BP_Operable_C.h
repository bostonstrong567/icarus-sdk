// /Game/Prototypes/SpaceStationPlayer/Blueprints/BP_Operable.BP_Operable_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Operable_C : public ABP_WorldObject_C, public IIInputCapture_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_InputCaptureComponent_C* BP_InputCaptureComponent;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnBeginInteract OnBeginInteract;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText InstructionsText;  // 0x0340, size 0x18

    UFUNCTION(BlueprintCallable) void AltFire(bool Press);  // parameters 0x1
    UFUNCTION() void BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(UBP_InputCaptureComponent_C* CaptureComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EndInputCapture(UBP_InputCaptureComponent_C* CaptureComponent);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Operable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Jump();
    UFUNCTION(BlueprintCallable) void LookX(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LookY(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBeginInteract__DelegateSignature();
    UFUNCTION(BlueprintCallable) void PrimaryFire(bool Press);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
