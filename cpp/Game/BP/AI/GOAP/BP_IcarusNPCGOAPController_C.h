// /Game/BP/AI/GOAP/BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C
// Derives from: AIcarusNPCGOAPController > AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_IcarusNPCGOAPController_C : public AIcarusNPCGOAPController
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ThreatOverDistanceCurve;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GOAP_Debugging;  // 0x0548, size 0x1, named "GOAP Debugging"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusGOAPAIMemory* Memory;  // 0x0550, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseStealthThreatModifier;  // 0x0558, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FootstepDistanceThreat;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryRow;  // 0x0568, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetActorThreat(AActor* PerceivedActor, bool bIgnoreRelationships);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetAdditionalTargetThreatModifier(AActor* PerceivedTarget, float& AdditionalThreatPlusPercent);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool MoveToAction(UIcarusGOAPAction* Action);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnProcessedDamage(AActor* PerceivedActor, FAIStimulus EventStimulus);  // parameters 0x45
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnProcessedNoise(AActor* PerceivedActor, FAIStimulus EventStimulus);  // parameters 0x45
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool RecalculateGOAPState();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetBlackboard();
    UFUNCTION(BlueprintCallable) void ShouldReactToPerceivedDamageNoise(AActor* PerceivedActor, bool& ShouldReact);  // parameters 0x9
};
