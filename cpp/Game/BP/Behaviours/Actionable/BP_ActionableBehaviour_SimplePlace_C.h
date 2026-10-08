// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_SimplePlace_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TickTraceOnClients;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoSecondaryDownwardTrace;  // 0x031D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult OnActionTraceHit;  // 0x0320, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EActionableEventType ActionTypeCache;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EActionableTrigger ActionTriggerCache;  // 0x03A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> TraceChannel;  // 0x03AA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WasLastTraceValid;  // 0x03AB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult LastCameraTrace;  // 0x03AC, size 0x88
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector ReplicatedTraceOrigin;  // 0x0434, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FRotator ReplicatedTraceRotation;  // 0x0440, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastInterpolatedHitLocation;  // 0x044C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastInterpolatedHitRotation;  // 0x0458, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceInterpolationSpeed;  // 0x0464, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanPerformAction();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool DoTrace(FHitResult& OutHit);  // parameters 0x89
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInterpolatedTraceData(FVector& TraceLocation, FRotator& TraceRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTraceDistance(float& TraceDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTraceIgnoreActors(TArray<AActor*>& OutIgnoreActors);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnActionCameraTraceHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) bool PerformLineTrace(FVector TraceStart, FVector TraceEnd, bool TraceComplex, TArray<AActor*>& IgnoreActors, FHitResult& OutHit);  // parameters 0xB9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_OnActionCameraTraceHit(FHitResult HitTrace);  // parameters 0x88
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UpdatePositionFromClient(FVector DeployTraceOrigin, FRotator DeployTraceRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ShouldActionCameraTrace(EActionableEventType ActionableType, EActionableTrigger ActionableTrigger, bool& ShouldTrace);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void TickCameraTraceHit(FHitResult Hit, bool DidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void UpdatePositionOnServer();
};
