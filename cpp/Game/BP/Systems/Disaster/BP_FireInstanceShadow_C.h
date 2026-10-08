// /Game/BP/Systems/Disaster/BP_FireInstanceShadow.BP_FireInstanceShadow_C
// Derives from: AFireInstanceShadow > AFireInstanceBase > AIcarusActor > AActor > UObject
// size 0x35C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FireInstanceShadow_C : public AFireInstanceShadow
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FireAudio_C* Audio;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FireInstance_RVTCapture_C* RVTCaptureActor;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UFlammableInstance*> Instance;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRemoveFireRef RemoveFireRef;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceBetweenFoliage;  // 0x0358, size 0x4

    UFUNCTION() void BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_FireInstanceShadow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAdded(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTransferredTo(AFireInstanceBase* Dest, UFlammableInstance* Instance);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveFireInstance(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveFireRef__DelegateSignature(UFlammableInstance* FlammableInstanceRef);  // parameters 0x8
};
