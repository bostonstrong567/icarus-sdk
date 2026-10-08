// /Game/BP/Player/HitReactionInterface.HitReactionInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UHitReactionInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void OnHitSuccessful(AActor* HitActor, AActor* DamageCauser, EStealthAttackType StealthAttack, bool KillCam);  // parameters 0x12
};
