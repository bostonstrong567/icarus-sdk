// /Script/Icarus.ShieldBlockedDamageInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Characters/Interfaces/ShieldBlockedDamageInterface.h

UCLASS(Abstract)
class UShieldBlockedDamageInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ShieldBlockedDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xD8
};
