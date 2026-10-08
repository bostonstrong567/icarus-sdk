// /Game/BP/AI/GOAP/Misc/BP_NPCTrailComponent_OverlapModifier.BP_NPCTrailComponent_OverlapModifier_C
// Derives from: UBP_NPCTrailComponent_C > UActorComponent > UObject
// size 0x244, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_NPCTrailComponent_OverlapModifier_C : public UBP_NPCTrailComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0210, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum ModifierStatFilter;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusStatContainer* OverlappedStatContainer;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Modifier_Lifetime;  // 0x0240, size 0x4, named "Modifier Lifetime"

    UFUNCTION(BlueprintCallable) void ApplyOverlapModifier(AActor* Target);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_NPCTrailComponent_OverlapModifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorBeginSplineOverlap(AActor* Actor, USplineMeshComponent* FirstSegmentOverlap);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ReapplyModifierToOverlappingActors();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
