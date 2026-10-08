// /Game/BP/Hunting/BP_HuntingFootprints.BP_HuntingFootprints_C
// Derives from: ABP_HuntingClue_C > AHuntingClue > AIcarusActor > AActor > UObject
// size 0x38E, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HuntingFootprints_C : public ABP_HuntingClue_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Hunting_C* BP_UIProjectionComponent_Hunting;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* UITarget;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClueDistance;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USplineMeshComponent*> SplineMeshes;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float TimeCreated;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackFootprints;  // 0x038C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanTrackFootprintTooltips;  // 0x038D, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_HuntingFootprints(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetHuntingWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNextClueDistance(float& Distance);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RegisterHuntingWidget();
    UFUNCTION(BlueprintCallable) void SetNextClueDistance(float Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdatePerceptionState();
    UFUNCTION(BlueprintCallable) void UpdateTrail();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
