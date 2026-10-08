// /Script/Icarus.IcarusPayload
// Derives from: AActor > UObject
// size 0x3E8, declared in Icarus/Source/Icarus/Actors/IcarusPayload.h

UCLASS(Config=Engine)
class AIcarusPayload : public AActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AController* PayloadInstigator;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* Causer;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* HitActor;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FHitResult HitResult;  // 0x0238, size 0x88
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool WasBounce;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FBallisticRowHandle BallisticRowHandle;  // 0x02C4, size 0x18
    UPROPERTY(Replicated) FStatContainer DamageStatContainer;  // 0x02E0, size 0x108

    UFUNCTION(BlueprintCallable) void FinishSpawning(UBallisticComponent* BallisticComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) int32 GetDamageStat(FStatsEnum Stat);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void SpawningComplete();
};
