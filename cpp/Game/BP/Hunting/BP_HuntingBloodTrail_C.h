// /Game/BP/Hunting/BP_HuntingBloodTrail.BP_HuntingBloodTrail_C
// Derives from: ABP_HuntingClue_C > AHuntingClue > AIcarusActor > AActor > UObject
// size 0x39C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HuntingBloodTrail_C : public ABP_HuntingClue_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Beam;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DirectionIndicator;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Hunting_C* BP_UIProjectionComponent_Hunting;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* UITarget;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USplineMeshComponent*> SplineMeshes;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float TimeCreated;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackBloodTrails;  // 0x0394, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackBloodTrailTooltips;  // 0x0395, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Nearby;  // 0x0396, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxIndicatorDistance;  // 0x0398, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_HuntingBloodTrail(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusUpdated(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetHuntingWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RegisterHuntingWidget();
    UFUNCTION(BlueprintCallable) void SetHuntingWidgetVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePerceptionState();
    UFUNCTION(BlueprintCallable) void UpdateStateVisuals();
    UFUNCTION(BlueprintCallable) void UpdateTrail();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
