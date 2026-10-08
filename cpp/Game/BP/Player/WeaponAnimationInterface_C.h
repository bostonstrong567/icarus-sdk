// /Game/BP/Player/WeaponAnimationInterface.WeaponAnimationInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UWeaponAnimationInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void WeaponFired(float Power);  // parameters 0x4
};
