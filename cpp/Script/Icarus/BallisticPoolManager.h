// /Script/Icarus.BallisticPoolManager
// Derives from: UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Systems/BallisticPoolManager.h

UCLASS(Config=Engine)
class UBallisticPoolManager : public UActorComponent
{
private:
    TMap<FItemsStaticRowHandle,TArray<AIcarusItem *,TFixedAllocator<50> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FItemsStaticRowHandle,TArray<AIcarusItem *,TFixedAllocator<50> >,0> > ItemPool;  // 0x00B0, not reflected
public:
    UFUNCTION(BlueprintCallable) bool DeactivateProjectile(AIcarusItem* InProjectile);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DestroyProjectile(AIcarusItem* InProjectile, bool bSkipPoolRemoval);  // parameters 0x9
    UFUNCTION(BlueprintCallable) AIcarusItem* RequestProjectile(const FItemData& ProjectileData, const FTransform& SpawnTransform, AActor* Owner);  // parameters 0x230
};
