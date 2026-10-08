// /Game/BP/Building/Roads/BP_IcarusSplineNet.BP_IcarusSplineNet_C
// Derives from: ASplineResourceNetworkBase > AResourceNetwork > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusSplineNet_C : public ASplineResourceNetworkBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<ABP_IcarusSplineActor_C*> LinkedSplines;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SlowTickTimer;  // 0x0320, size 0x8

    UFUNCTION(BlueprintCallable) void AddSpline(ABP_IcarusSplineActor_C* Added_Spline);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AreTwoSplinesConnected(ABP_IcarusSplineActor_C* SplineA, ABP_IcarusSplineActor_C* Spline_B, bool& Connected);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION(BlueprintCallable) void CreateNewNetworkAtSpline(ABP_IcarusSplineActor_C* Spline);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DEBUG_DrawDebugInfo();
    UFUNCTION(BlueprintCallable) void DelayedCleanupCheck();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplineNet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MergeNetwork(ABP_IcarusSplineNet_C* NetworkToMerge);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveSpline(ABP_IcarusSplineActor_C* SplineToRemove);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SlowTick();
};
