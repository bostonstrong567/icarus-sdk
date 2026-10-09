// /Game/BP/Objects/World/Resources/Trees/BP_TreeBase_Burnt.BP_TreeBase_Burnt_C
// Derives from: ABP_TreeBase_C > ATreeBase > AIcarusActor > AActor > UObject
// size 0x880, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreeBase_Burnt_C : public ABP_TreeBase_C
{
public:
    UFUNCTION(BlueprintCallable) void OnAppliedCollisionDamage(float CollisionDamage, FHitResult Hit);  // parameters 0x8C
};
