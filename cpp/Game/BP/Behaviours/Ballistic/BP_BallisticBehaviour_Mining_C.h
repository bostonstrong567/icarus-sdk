// /Game/BP/Behaviours/Ballistic/BP_BallisticBehaviour_Mining.BP_BallisticBehaviour_Mining_C
// Derives from: UBP_BallisticBehaviour_Base_C > UBallisticComponent > UTraitComponent > UActorComponent > UObject
// size 0xB1C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BallisticBehaviour_Mining_C : public UBP_BallisticBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HitRock;  // 0x0A60, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NUM_DRILL_HITS;  // 0x0A64, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult ProjectedHit;  // 0x0A68, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AdditionalDamageTimer;  // 0x0AF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalNumAdditionalDamageHits;  // 0x0AF8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AdditionalDamageHitsPerformed;  // 0x0AFC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeLocation;  // 0x0B00, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeNormal;  // 0x0B0C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenDamageEvents;  // 0x0B18, size 0x4

    UFUNCTION(BlueprintCallable) void ApplyDamage(AActor* HitActor, const FHitResult& HitInfo);  // parameters 0x90
    UFUNCTION() void ExecuteUbergraph_BP_BallisticBehaviour_Mining(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayBloodSplats(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void PlayBloodSplats(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void PlayHitEffects(FHitResult Hit, bool ValidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void TryApplyAdditionalDamage();
};
