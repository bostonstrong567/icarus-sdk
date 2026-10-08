// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Scanner.BP_ActionableBehaviour_Scanner_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3AC, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Scanner_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* BehaviourOwner;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* IcarusItem;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ScanningIntensity;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> NearbyActors;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxScanningRange;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDistance;  // 0x0344, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ProximityItensityCurve;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDirection;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DirectionIntensityCurve;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NearbyActorsHandle;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyActorsFrequency;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ClassToScan;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDirectionAngle;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowClosestAngle;  // 0x037C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ClosestAngleOffsetCurve;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClosestAngle;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxExtraNoiseMultiplier;  // 0x038C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ClosestAngleNoise;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAngleOffset;  // 0x0394, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D AngleOffsetDelayFrequency;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BeepingCurve;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BeepingIntensity;  // 0x03A8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Scanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<AActor*> ExtraNearbyFilter(TArray<AActor*>& InNearbyActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void FilterActors(const TArray<AActor*>& Actors, TArray<AActor*>& Filtered);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetActors(TArray<AActor*>& OutActors);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetTrackedActor(AActor*& Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateNearbyActors();
    UFUNCTION(BlueprintCallable) void UpdateScanningIntensity();
};
